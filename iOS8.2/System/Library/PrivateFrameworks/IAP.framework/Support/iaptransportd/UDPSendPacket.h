/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:25:32 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/IAP.framework/Support/iaptransportd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <iaptransportd/iaptransportd-Structs.h>
@class NSMutableData, NSData;

@interface UDPSendPacket : NSObject {

	NSMutableData* _data;
	NSData* _address;
	const sockaddr* _sockAddr;
	unsigned _sockAddrLen;
	unsigned char _addressFamily;

}
-(id)initWithData:(const char*)arg1 dataLength:(unsigned long)arg2 ;
-(id)initWithData:(const char*)arg1 dataLength:(unsigned long)arg2 address:(id)arg3 ;
-(void)updatePacketData:(id)arg1 ;
-(void)dealloc;
@end

