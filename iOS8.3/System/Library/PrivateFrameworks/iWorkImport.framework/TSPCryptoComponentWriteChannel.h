/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 4:42:05 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSPComponentWriteChannel.h>

@protocol TSPComponentWriteChannel, TSPMutableCryptoInfo;
@class NSString;

@interface TSPCryptoComponentWriteChannel : NSObject <TSPComponentWriteChannel> {

	id<TSPComponentWriteChannel> _writeChannel;
	id<TSPMutableCryptoInfo> _encryptionInfo;
	char* _buffer;
	CCCryptorRef _cryptor;
	SCD_Struct_TS272 _ccHmacContext;
	unsigned long _encodedBlockLength;
	unsigned long _decryptedBlockLength;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithWriteChannel:(id)arg1 encryptionInfo:(id)arg2 ;
-(char)_initializeBlock;
-(void)_writeData:(id)arg1 isDecryptedData:(char)arg2 ;
-(char)_finalizeBlockForClosing:(char)arg1 ;
-(void)dealloc;
-(void)close;
-(void)writeData:(id)arg1 ;
@end
