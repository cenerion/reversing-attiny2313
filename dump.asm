﻿
./flash.hex:     file format ihex

Contents of section .sec1:
 0000 12c017c0 16c015c0 14c013c0 12c011c0 
 0010 10c00fc0 0ec00dc0 0cc00bc0 0ac009c0  
 0020 08c007c0 06c01124 1fbecfed cdbf02d0  
 0030 5bc0e6cf 8ab38360 8abb9fef 97bb91bb  
 0040 8bb38c7f 8bbb92bb 40e068ec 70e05fef  
 0050 a1e0b0e0 2ac052bb cd01042e 02c0880f  
 0060 991f0a94 e2f788bb 88e893e1 fb013197  
 0070 f1f70197 d9f74430 b8f420e0 30e0cd01  
 0080 022e02c0 880f991f 0a94e2f7 809582bb  
 0090 88e893e1 fb013197 f1f70197 d9f72f5f  
 00a0 3f4f2730 310559f7 4f5f4830 a0f218ba  
 00b0 8bb38d6f 8bbb88e8 93e1fb01 3197f1f7  
 00c0 0197d9f7 8bb38c7f 8bbb8bb3 8e6f8bbb  
 00d0 88e893e1 fb013197 f1f70197 d9f78bb3  
 00e0 8c7f8bbb 40e0b7cf f894ffcf           

Disassembly of section .sec1:

00000000 <.sec1>:
   0:	12 c0       	rjmp	.+36     	;  0x26
   2:	17 c0       	rjmp	.+46     	;  0x32
   4:	16 c0       	rjmp	.+44     	;  0x32
   6:	15 c0       	rjmp	.+42     	;  0x32
   8:	14 c0       	rjmp	.+40     	;  0x32
   a:	13 c0       	rjmp	.+38     	;  0x32
   c:	12 c0       	rjmp	.+36     	;  0x32
   e:	11 c0       	rjmp	.+34     	;  0x32
  10:	10 c0       	rjmp	.+32     	;  0x32
  12:	0f c0       	rjmp	.+30     	;  0x32
  14:	0e c0       	rjmp	.+28     	;  0x32
  16:	0d c0       	rjmp	.+26     	;  0x32
  18:	0c c0       	rjmp	.+24     	;  0x32
  1a:	0b c0       	rjmp	.+22     	;  0x32
  1c:	0a c0       	rjmp	.+20     	;  0x32
  1e:	09 c0       	rjmp	.+18     	;  0x32
  20:	08 c0       	rjmp	.+16     	;  0x32
  22:	07 c0       	rjmp	.+14     	;  0x32
  24:	06 c0       	rjmp	.+12     	;  0x32
  26:	11 24       	eor	r1, r1
  28:	1f be       	out	0x3f, r1	; 63
  2a:	cf ed       	ldi	r28, 0xDF	; 223
  2c:	cd bf       	out	0x3d, r28	; 61
  2e:	02 d0       	rcall	.+4      	;  0x34
  30:	5b c0       	rjmp	.+182    	;  0xe8
  32:	e6 cf       	rjmp	.-52     	;  0x0
  34:	8a b3       	in	r24, 0x1a	; 26
  36:	83 60       	ori	r24, 0x03	; 3
  38:	8a bb       	out	0x1a, r24	; 26
  3a:	9f ef       	ldi	r25, 0xFF	; 255
  3c:	97 bb       	out	0x17, r25	; 23
  3e:	91 bb       	out	0x11, r25	; 17
  40:	8b b3       	in	r24, 0x1b	; 27
  42:	8c 7f       	andi	r24, 0xFC	; 252
  44:	8b bb       	out	0x1b, r24	; 27
  46:	92 bb       	out	0x12, r25	; 18
  48:	40 e0       	ldi	r20, 0x00	; 0
  4a:	68 ec       	ldi	r22, 0xC8	; 200
  4c:	70 e0       	ldi	r23, 0x00	; 0
  4e:	5f ef       	ldi	r21, 0xFF	; 255
  50:	a1 e0       	ldi	r26, 0x01	; 1
  52:	b0 e0       	ldi	r27, 0x00	; 0
  54:	2a c0       	rjmp	.+84     	;  0xaa
  56:	52 bb       	out	0x12, r21	; 18
  58:	cd 01       	movw	r24, r26
  5a:	04 2e       	mov	r0, r20
  5c:	02 c0       	rjmp	.+4      	;  0x62
  5e:	88 0f       	add	r24, r24
  60:	99 1f       	adc	r25, r25
  62:	0a 94       	dec	r0
  64:	e2 f7       	brpl	.-8      	;  0x5e
  66:	88 bb       	out	0x18, r24	; 24
  68:	88 e8       	ldi	r24, 0x88	; 136
  6a:	93 e1       	ldi	r25, 0x13	; 19
  6c:	fb 01       	movw	r30, r22
  6e:	31 97       	sbiw	r30, 0x01	; 1
  70:	f1 f7       	brne	.-4      	;  0x6e
  72:	01 97       	sbiw	r24, 0x01	; 1
  74:	d9 f7       	brne	.-10     	;  0x6c
  76:	44 30       	cpi	r20, 0x04	; 4
  78:	b8 f4       	brcc	.+46     	;  0xa8
  7a:	20 e0       	ldi	r18, 0x00	; 0
  7c:	30 e0       	ldi	r19, 0x00	; 0
  7e:	cd 01       	movw	r24, r26
  80:	02 2e       	mov	r0, r18
  82:	02 c0       	rjmp	.+4      	;  0x88
  84:	88 0f       	add	r24, r24
  86:	99 1f       	adc	r25, r25
  88:	0a 94       	dec	r0
  8a:	e2 f7       	brpl	.-8      	;  0x84
  8c:	80 95       	com	r24
  8e:	82 bb       	out	0x12, r24	; 18
  90:	88 e8       	ldi	r24, 0x88	; 136
  92:	93 e1       	ldi	r25, 0x13	; 19
  94:	fb 01       	movw	r30, r22
  96:	31 97       	sbiw	r30, 0x01	; 1
  98:	f1 f7       	brne	.-4      	;  0x96
  9a:	01 97       	sbiw	r24, 0x01	; 1
  9c:	d9 f7       	brne	.-10     	;  0x94
  9e:	2f 5f       	subi	r18, 0xFF	; 255
  a0:	3f 4f       	sbci	r19, 0xFF	; 255
  a2:	27 30       	cpi	r18, 0x07	; 7
  a4:	31 05       	cpc	r19, r1
  a6:	59 f7       	brne	.-42     	;  0x7e
  a8:	4f 5f       	subi	r20, 0xFF	; 255
  aa:	48 30       	cpi	r20, 0x08	; 8
  ac:	a0 f2       	brcs	.-88     	;  0x56
  ae:	18 ba       	out	0x18, r1	; 24
  b0:	8b b3       	in	r24, 0x1b	; 27
  b2:	8d 6f       	ori	r24, 0xFD	; 253
  b4:	8b bb       	out	0x1b, r24	; 27
  b6:	88 e8       	ldi	r24, 0x88	; 136
  b8:	93 e1       	ldi	r25, 0x13	; 19
  ba:	fb 01       	movw	r30, r22
  bc:	31 97       	sbiw	r30, 0x01	; 1
  be:	f1 f7       	brne	.-4      	;  0xbc
  c0:	01 97       	sbiw	r24, 0x01	; 1
  c2:	d9 f7       	brne	.-10     	;  0xba
  c4:	8b b3       	in	r24, 0x1b	; 27
  c6:	8c 7f       	andi	r24, 0xFC	; 252
  c8:	8b bb       	out	0x1b, r24	; 27
  ca:	8b b3       	in	r24, 0x1b	; 27
  cc:	8e 6f       	ori	r24, 0xFE	; 254
  ce:	8b bb       	out	0x1b, r24	; 27
  d0:	88 e8       	ldi	r24, 0x88	; 136
  d2:	93 e1       	ldi	r25, 0x13	; 19
  d4:	fb 01       	movw	r30, r22
  d6:	31 97       	sbiw	r30, 0x01	; 1
  d8:	f1 f7       	brne	.-4      	;  0xd6
  da:	01 97       	sbiw	r24, 0x01	; 1
  dc:	d9 f7       	brne	.-10     	;  0xd4
  de:	8b b3       	in	r24, 0x1b	; 27
  e0:	8c 7f       	andi	r24, 0xFC	; 252
  e2:	8b bb       	out	0x1b, r24	; 27
  e4:	40 e0       	ldi	r20, 0x00	; 0
  e6:	b7 cf       	rjmp	.-146    	;  0x56
  e8:	f8 94       	cli
  ea:	ff cf       	rjmp	.-2      	;  0xea
