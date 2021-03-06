/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:35:18 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/SFUInputStream.h>

@protocol SFUInputStream;
@class SFUCryptor, NSString;

@interface SFUCryptoInputStream : NSObject <SFUInputStream> {

	id<SFUInputStream> mBaseStream;
	SFUCryptor* mCryptor;
	long long mOffset;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(long long)offset;
-(void)close;
-(id)initForDecryptionWithInputStream:(id)arg1 key:(id)arg2 ;
-(unsigned long long)readToBuffer:(char*)arg1 size:(unsigned long long)arg2 ;
-(void)disableSystemCaching;
-(void)enableSystemCaching;
-(id)closeLocalStream;
-(void)seekToOffset:(long long)arg1 ;
-(BOOL)canSeek;
@end

