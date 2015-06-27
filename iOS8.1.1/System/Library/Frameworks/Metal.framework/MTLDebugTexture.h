/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:28:40 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Metal/MTLToolsTexture.h>

@class MTLTextureDescriptor;

@interface MTLDebugTexture : MTLToolsTexture {

	BOOL _purgeableStateHasBeenSet;
	MTLTextureDescriptor* _descriptor;
	unsigned long long _offset;
	unsigned long long _bytesPerRow;
	unsigned long long _plane;
	unsigned long long _purgeableState;

}

@property (nonatomic,copy,readonly) MTLTextureDescriptor * descriptor;              //@synthesize descriptor=_descriptor - In the implementation block
@property (nonatomic,readonly) unsigned long long offset;                           //@synthesize offset=_offset - In the implementation block
@property (nonatomic,readonly) unsigned long long bytesPerRow;                      //@synthesize bytesPerRow=_bytesPerRow - In the implementation block
@property (nonatomic,readonly) unsigned long long plane;                            //@synthesize plane=_plane - In the implementation block
@property (nonatomic,readonly) unsigned long long purgeableState;                   //@synthesize purgeableState=_purgeableState - In the implementation block
@property (nonatomic,readonly) BOOL purgeableStateHasBeenSet;                       //@synthesize purgeableStateHasBeenSet=_purgeableStateHasBeenSet - In the implementation block
-(unsigned long long)setPurgeableState:(unsigned long long)arg1 ;
-(id)newTextureViewWithPixelFormat:(unsigned long long)arg1 ;
-(id)initWithBaseTexture:(id)arg1 buffer:(id)arg2 descriptor:(id)arg3 offset:(unsigned long long)arg4 bytesPerRow:(unsigned long long)arg5 ;
-(unsigned long long)purgeableState;
-(BOOL)purgeableStateHasBeenSet;
-(id)initWithBaseTexture:(id)arg1 device:(id)arg2 descriptor:(id)arg3 ;
-(id)initWithBaseTexture:(id)arg1 device:(id)arg2 descriptor:(id)arg3 plane:(unsigned long long)arg4 ;
-(id)initWithBaseTexture:(id)arg1 texture:(id)arg2 descriptor:(id)arg3 ;
-(id)initWithBaseTexture:(id)arg1 texture:(id)arg2 pixelFormat:(unsigned long long)arg3 ;
-(unsigned long long)plane;
-(unsigned long long)bytesPerRow;
-(id)description;
-(unsigned long long)offset;
-(MTLTextureDescriptor *)descriptor;
@end
