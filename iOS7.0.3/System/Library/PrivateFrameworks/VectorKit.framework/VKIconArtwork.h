/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:58:09 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <VectorKit/VKObjectPoolObject.h>

@class VGLIcon, NSMutableArray, VKObjectPool, NSString;

@interface VKIconArtwork : NSObject <VKObjectPoolObject> {

	BOOL _hasIcon;
	VGLIcon* _icon;
	NSMutableArray* _completionHandlers;
	VKObjectPool* _pool;
	NSString* _poolKey;

}

@property (nonatomic,readonly) CGSize size; 
-(void)dealloc;
-(CGSize)size;
-(void)setPool:(id)arg1 withKey:(id)arg2 ;
-(id)_newIcon;
-(void)_cleanUpAfterDrawing;
-(id)initWithImage:(CGImageRef)arg1 contentScale:(float)arg2 ;
-(id)icon;
-(void)getIcon:(/*^block*/ id)arg1 ;
@end

