/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:19:54 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <CoreUI/CoreUI-Structs.h>
@class CUIPSDImageRef;

@interface CUIPSDLayerBaseRef : NSObject {

	CUIPSDImageRef* _imageRef;
	unsigned _layerIndex;

}

@property (readonly) CGRect bounds; 
@property (readonly) char visibility; 
@property (readonly) float opacity; 
@property (readonly) float fillOpacity; 
@property (readonly) int blendMode; 
@property (readonly) char hasLayerMask; 
@property (readonly) char hasVectorMask; 
-(int)blendMode;
-(CGRect)bounds;
-(id)name;
-(float)opacity;
-(CPSDLayerRecord*)_psdLayerRecord;
-(char)hasVectorMask;
-(char)hasLayerMask;
-(id)_psdImageRef;
-(char)isLayerGroup;
-(float)fillOpacity;
-(id)layerMaskRef;
-(id)vectorMaskRef;
-(CGImageRef)_createMaskFromAlphaChannel:(int)arg1 ;
-(char)visibility;
@end

