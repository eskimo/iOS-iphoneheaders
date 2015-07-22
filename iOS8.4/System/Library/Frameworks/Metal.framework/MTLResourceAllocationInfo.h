/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:18:22 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Metal/Metal-Structs.h>
#import <Metal/NSCopying.h>
#import <Metal/NSCoding.h>

@class NSString;

@interface MTLResourceAllocationInfo : NSObject <NSCopying, NSCoding> {

	BOOL _pageoffRequired;
	BOOL _purgeable;
	NSString* _memoryPool;
	unsigned long long _virtualSize;
	unsigned long long _residentSize;
	unsigned long long _dirtySize;
	unsigned long long _uniqueIdentifier;

}

@property (readonly) NSString * memoryPool;                            //@synthesize memoryPool=_memoryPool - In the implementation block
@property (readonly) unsigned long long virtualSize;                   //@synthesize virtualSize=_virtualSize - In the implementation block
@property (readonly) unsigned long long residentSize;                  //@synthesize residentSize=_residentSize - In the implementation block
@property (readonly) unsigned long long dirtySize;                     //@synthesize dirtySize=_dirtySize - In the implementation block
@property (readonly) BOOL pageoffRequired;                             //@synthesize pageoffRequired=_pageoffRequired - In the implementation block
@property (readonly) BOOL purgeable;                                   //@synthesize purgeable=_purgeable - In the implementation block
@property (readonly) unsigned long long uniqueIdentifier;              //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
-(BOOL)purgeable;
-(NSString *)memoryPool;
-(unsigned long long)residentSize;
-(unsigned long long)dirtySize;
-(BOOL)pageoffRequired;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)virtualSize;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)uniqueIdentifier;
@end
