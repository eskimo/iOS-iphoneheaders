/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:23:16 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/LatteRTC.framework/LatteRTC
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <LatteRTC/LatteRTC-Structs.h>
#import <LatteRTC/LTERTCPPacket.h>

@class NSString;

@interface LTERTCPSourceDescription : LTERTCPPacket {

	unsigned char _type;
	NSString* _text;

}

@property (assign,nonatomic) unsigned char type;              //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) NSString * text;                 //@synthesize text=_text - In the implementation block
-(void)dealloc;
-(id)description;
-(void)setType:(unsigned char)arg1 ;
-(unsigned char)type;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(id)initWithRTCPPacket:(tagRTCPPACKET*)arg1 ;
@end

