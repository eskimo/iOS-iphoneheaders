/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:55:47 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <MobileBackup/MobileBackup-Structs.h>
#import <MobileBackup/MBDigest.h>

@interface MBDigestSHA1 : MBDigest {

	CC_SHA1state_st _context;

}
-(id)init;
-(void)finalWithBytes:(void*)arg1 length:(unsigned)arg2 ;
-(id)final;
-(void)updateWithBytes:(const void*)arg1 length:(unsigned)arg2 ;
@end
