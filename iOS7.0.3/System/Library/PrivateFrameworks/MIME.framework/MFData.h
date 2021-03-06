/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:55:33 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <MIME/MIME-Structs.h>
#import <CoreFoundation/NSData.h>
#import <CoreFoundation/NSCopying.h>
#import <CoreFoundation/NSMutableCopying.h>

@class NSData, NSString;

@interface MFData : NSData <NSCopying, NSMutableCopying> {

	NSData* _internal;
	NSString* _path;
	NSData* _parent;
	BOOL _subdata;

}
+(void)setDefaultMappingThresholdInBytes:(unsigned)arg1 ;
-(id)subdataWithRange:(NSRange)arg1 ;
-(id)initWithBytesNoCopy:(void*)arg1 length:(unsigned)arg2 ;
-(id)initWithContentsOfURL:(id)arg1 options:(unsigned)arg2 error:(id*)arg3 ;
-(void)dealloc;
-(id)init;
-(unsigned)length;
-(BOOL)writeToFile:(id)arg1 options:(unsigned)arg2 error:(id*)arg3 ;
-(BOOL)writeToFile:(id)arg1 atomically:(BOOL)arg2 ;
-(BOOL)writeToURL:(id)arg1 options:(unsigned)arg2 error:(id*)arg3 ;
-(BOOL)writeToURL:(id)arg1 atomically:(BOOL)arg2 ;
-(id)initWithBytesNoCopy:(void*)arg1 length:(unsigned)arg2 freeWhenDone:(BOOL)arg3 ;
-(const void*)bytes;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(id)data;
-(id)initWithContentsOfFile:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithBytes:(const void*)arg1 length:(unsigned)arg2 ;
-(id)initWithContentsOfFile:(id)arg1 options:(unsigned)arg2 error:(id*)arg3 ;
-(id)mutableCopyWithZone:(NSZoneRef)arg1 ;
-(id)initWithContentsOfURL:(id)arg1 ;
-(id)_initWithRange:(NSRange)arg1 from:(id)arg2 retainingParent:(BOOL)arg3 ;
-(BOOL)mf_immutable;
-(id)_initWithData:(id)arg1 maybeMutable:(BOOL)arg2 ;
-(id)_initWithFile:(id)arg1 ;
-(id)initWithImmutableData:(id)arg1 ;
-(id)initWithContentsOfMappedFile:(id)arg1 ;
@end

