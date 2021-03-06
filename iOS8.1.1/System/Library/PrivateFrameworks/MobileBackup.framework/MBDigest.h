/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:32:37 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface MBDigest : NSObject
+(id)sha1;
+(id)sha1ForData:(id)arg1 ;
+(id)sha1ForFileAtPath:(id)arg1 error:(id*)arg2 ;
+(id)sha1ForString:(id)arg1 ;
-(void)updateWithData:(id)arg1 ;
-(void)updateWithString:(id)arg1 ;
-(void)finalWithBytes:(void*)arg1 length:(unsigned long long)arg2 ;
-(id)final;
-(BOOL)updateWithFile:(id)arg1 error:(id*)arg2 ;
-(void)updateWithBytes:(const void*)arg1 length:(unsigned long long)arg2 ;
-(void)updateWithInt64:(long long)arg1 ;
-(void)updateWithInt32:(int)arg1 ;
-(void)updateWithDate:(id)arg1 ;
@end

