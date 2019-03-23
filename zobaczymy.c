
int main(void){
	/*
  34:	8a b3       	in	r24, 0x1a	; 26		r24 <- DDRA
  36:	83 60       	ori	r24, 0x03	; 3			r24 <- r24 || 0b00000011 (logiczny or)
  38:	8a bb       	out	0x1a, r24	; 26		DDRA <- r24
	*/
  DDRA |= 0b00000011;
  
  /*
  3a:	9f ef       	ldi	r25, 0xFF	; 255		r25 <- 0b11111111
  3c:	97 bb       	out	0x17, r25	; 23		DDRB <- r25
  3e:	91 bb       	out	0x11, r25	; 17		DDRD <- r25
  */
  DDRB = 0b11111111;
  DDRD = 0b11111111;
  
  /*
  40:	8b b3       	in	r24, 0x1b	; 27		r24 <- PORTA
  42:	8c 7f       	andi	r24, 0xFC	; 252	r24 <- r24 && 0b11111100 (logiczny and)
  44:	8b bb       	out	0x1b, r24	; 27		PORTA <- r24
  */
  PORTA &= 0b11111100;
 
 
  46:	92 bb       	out	0x12, r25	; 18		PORTD <- r25
  
  
  /*
  48:	40 e0       	ldi	r20, 0x00	; 0			r20 <- 0b00000000
  4a:	68 ec       	ldi	r22, 0xC8	; 200		r22 <- 0b11001000
  4c:	70 e0       	ldi	r23, 0x00	; 0			r23 <- 0b00000000
  4e:	5f ef       	ldi	r21, 0xFF	; 255		r21 <- 0b11111111
  50:	a1 e0       	ldi	r26, 0x01	; 1			r26 <- 0b00000001
  52:	b0 e0       	ldi	r27, 0x00	; 0			r27 <- 0b00000000
  */
  uint8_t r20 = 0;	//0x00
  uint8_t r22 = 200;//0xC8
  uint8_t r23 = 0;	//0x00
  uint8_t r26 = 1;	//0x01
  uint8_t r27 = 0;	//0x00
  
  /*
  54:	2a c0       	rjmp	.+84     	;  0xaa		jump to #PIERWSZY
  */
  goto PIERWSZY;
  
  
  /*
  56:	52 bb       	out	0x12, r21	; 18		PORTD <- r21
  */
  PORTD = 0xFF;
  
  
  58:	cd 01       	movw	r24, r26			r25:r24 <- r27:r26 //00:01 (??)
  5a:	04 2e       	mov	r0, r20					r0 <- r20//0
  
  /*
  5c:	02 c0       	rjmp	.+4      	;  0x62	jump to 0x62
  */
  goto DRUGI;
  
  5e:	88 0f       	add	r24, r24				r24 <- r24 + r24
  60:	99 1f       	adc	r25, r25				r25 <- r25 + r25 + C(???)
#DRUGI


  62:	0a 94       	dec	r0						r0 <- r0 - 0b00000001 // 0 - 1 (??)
  64:	e2 f7       	brpl	.-8      	;  0x5e	if(N=0){jump to 0x5e}
  
  
  66:	88 bb       	out	0x18, r24	; 24		PORTB <- r24
  68:	88 e8       	ldi	r24, 0x88	; 136		r24 <- 0b10001000
  6a:	93 e1       	ldi	r25, 0x13	; 19		r25 <- 0b00010011
  
  
  6c:	fb 01       	movw	r30, r22			r31:r30 <- r23:r22
  
  /*
  6e:	31 97       	sbiw	r30, 0x01	; 1		r31:r30 <- r31:r30 - 0b00000001
  70:	f1 f7       	brne	.-4      	;  0x6e	if(Z=0){jump to 0x6e}
  */
  for(i = 200 ; ) // delay
  
  
  72:	01 97       	sbiw	r24, 0x01	; 1		r25:r24 <- r25:r24 - 0b00000001//0b0001001110001000 = 5000--
  74:	d9 f7       	brne	.-10     	;  0x6c	if(Z=0){jump to 0x6c}
  
  
  76:	44 30       	cpi	r20, 0x04	; 4			compare r20 and 0b00000100
  78:	b8 f4       	brcc	.+46     	;  0xa8	if(C=0){jump to 0xa8}
  7a:	20 e0       	ldi	r18, 0x00	; 0			r18 <- 0b00000000
  7c:	30 e0       	ldi	r19, 0x00	; 0			r19 <- 0b00000000
  7e:	cd 01       	movw	r24, r26			r25:r24 <- r27:r26
  80:	02 2e       	mov	r0, r18					r0 <- r18
  
  82:	02 c0       	rjmp	.+4      	;  0x88	jump to 0x88
  
  
  84:	88 0f       	add	r24, r24				r24 <- r24 + r24
  86:	99 1f       	adc	r25, r25				r25 <- r25 + r25 + C(???)
  88:	0a 94       	dec	r0						r0 <- r0 - 0b00000001
  8a:	e2 f7       	brpl	.-8      	;  0x84	if(N=0){jump to 0x84}
  
  
  8c:	80 95       	com	r24						r24 <- 0b11111111 - r24
  8e:	82 bb       	out	0x12, r24	; 18		PORTD <- r24
  90:	88 e8       	ldi	r24, 0x88	; 136		r24 <- 0b10001000
  92:	93 e1       	ldi	r25, 0x13	; 19		r25 <- 0b00010011
  94:	fb 01       	movw	r30, r22			r31:r30 <- r23:r22
  96:	31 97       	sbiw	r30, 0x01	; 1		r31:r30 <- r31:r30 - 0b00000001
  98:	f1 f7       	brne	.-4      	;  0x96	if(Z=0){jump to 0x96}
  
  9a:	01 97       	sbiw	r24, 0x01	; 1		r25:r24 <- r25:r24 - 0b00000001
  9c:	d9 f7       	brne	.-10     	;  0x94	if(Z=0){jump to 0x94}
  
  
  9e:	2f 5f       	subi	r18, 0xFF	; 255	r18 <- r18 - 0b11111111
  a0:	3f 4f       	sbci	r19, 0xFF	; 255	r19 <- r19 - 0b11111111
  a2:	27 30       	cpi	r18, 0x07	; 7			compare r18 and 0b00000111
  a4:	31 05       	cpc	r19, r1					compare with carry r19 and r1 (???)
  a6:	59 f7       	brne	.-42     	;  0x7e	if(Z=0){jump to 0x7e}
  
  a8:	4f 5f       	subi	r20, 0xFF	; 255	r20 <- r20 - 0b11111111
  
#PIERWSZY
  /*
  aa:	48 30       	cpi	r20, 0x08	; 8			if(r20 == 0b00001000){C-flag = 1}
  ac:	a0 f2       	brcs	.-88     	;  0x56	if(C-flag = 1){jump to 0x56}
  */
  if(r20 < 0b00001000){
	  goto 0x56;
  }
  
  ae:	18 ba       	out	0x18, r1	; 24		PORTB <- r1
  
  /*
  b0:	8b b3       	in	r24, 0x1b	; 27		r24 <- PORTA
  b2:	8d 6f       	ori	r24, 0xFD	; 253		r24 <- r24 || 0b11111101
  b4:	8b bb       	out	0x1b, r24	; 27		PORTA <- r24
  */
  PORTA |= 0b11111101;
  
  b6:	88 e8       	ldi	r24, 0x88	; 136		r24 <- 0b10001000
  b8:	93 e1       	ldi	r25, 0x13	; 19		r25 <- 0b00010011
  ba:	fb 01       	movw	r30, r22			r31:r30 <- r23:r22 
  bc:	31 97       	sbiw	r30, 0x01	; 1		r31:r30 <- r31:r30 - 0b00000001
  be:	f1 f7       	brne	.-4      	;  0xbc	if(Z=0){jump to 0xbc}
  c0:	01 97       	sbiw	r24, 0x01	; 1		r25:r24 <- r25:r24 - 0b00000001
  c2:	d9 f7       	brne	.-10     	;  0xba	if(Z=0){jump to 0xba}
  
  /*
  c4:	8b b3       	in	r24, 0x1b	; 27		r24 <- PORTA
  c6:	8c 7f       	andi	r24, 0xFC	; 252	r24 <- r24 - 0b11111100
  c8:	8b bb       	out	0x1b, r24	; 27		PORTA <- r24
  */
  PORTA &= 0b11111100;
  
  /*
  ca:	8b b3       	in	r24, 0x1b	; 27		r24 <- PORTA
  cc:	8e 6f       	ori	r24, 0xFE	; 254		r24 <- r24 || 0b11111110
  ce:	8b bb       	out	0x1b, r24	; 27		PORTA <- r24
  */
  PORTA |= 0b11111110;
  
  d0:	88 e8       	ldi	r24, 0x88	; 136		r24 <- 0b10001000
  d2:	93 e1       	ldi	r25, 0x13	; 19		r25 <- 0b00010011
  
  d4:	fb 01       	movw	r30, r22			r31:r30 <- r23:r22
  d6:	31 97       	sbiw	r30, 0x01	; 1		r31:r30 <- r31:r30 - 0b00000001
  d8:	f1 f7       	brne	.-4      	;  0xd6	if(Z=0){jump to 0xd6}
  
  
  da:	01 97       	sbiw	r24, 0x01	; 1		r25:r24 <- r25:r24 - 0b00000001
  dc:	d9 f7       	brne	.-10     	;  0xd4	if(Z=0){jump to 0xd4}
  
  
  /*
  de:	8b b3       	in	r24, 0x1b	; 27		r24 <- PORTA
  e0:	8c 7f       	andi	r24, 0xFC	; 252	r24 <- r24 && 0b11111100 (logiczny and)
  e2:	8b bb       	out	0x1b, r24	; 27		PORTA <- r24
  */
  PORTA &= 0b11111100;
  
  e4:	40 e0       	ldi	r20, 0x00	; 0			r20 <- 0b00000000
  e6:	b7 cf       	rjmp	.-146    	;  0x56	jump to 0x56

}
Z
C


