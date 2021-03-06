/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:42 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <VectorKit/VKObjectPoolObject.h>

@class VKPShieldVariant, VKObjectPool, NSString, NSCache, NSDictionary, NSMutableDictionary;

@interface VKShieldArtwork : NSObject <VKObjectPoolObject> {

	double _scale;
	VKPShieldVariant* _variantData;
	VKObjectPool* _pool;
	NSString* _poolKey;
	NSCache* _imageCache;
	NSDictionary* _stringAttributes;
	CGColorRef _shadowColor;
	CTFontRef _nonDigitFont;
	float _extraScale;
	CGPoint _center;
	NSMutableDictionary* _textSpecificArtworks;
	CGSize _imageSize;
	CGContextRef _templateContext;
	/*^block*/ id _newContext;

}
-(void)dealloc;
-(id).cxx_construct;
-(void)setPool:(id)arg1 withKey:(id)arg2 ;
-(id)imageWithShieldText:(id)arg1 allowMultiline:(bool)arg2 ;
-(CGImageRef)newImageWithShieldText:(id)arg1 allowMultiline:(bool)arg2 centerPoint:(CGPoint*)arg3 ;
-(id)initWithPackedVariant:(id)arg1 imageAtlas:(id)arg2 quadSize:(CGSize)arg3 scale:(double)arg4 extraScale:(double)arg5 ;
-(void)setTextSpecificArtwork:(id)arg1 forStrings:(id)arg2 ;
-(id)imageWithShieldText:(id)arg1 ;
@end

