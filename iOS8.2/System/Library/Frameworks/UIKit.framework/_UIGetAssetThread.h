/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:19:07 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/NSThread.h>

@class NSURL, ALAssetsLibrary, NSCondition, ALAsset;

@interface _UIGetAssetThread : NSThread {

	NSURL* _url;
	ALAssetsLibrary* _library;
	NSCondition* _condition;
	ALAsset* _asset;

}

@property (retain) NSCondition * condition;              //@synthesize condition=_condition - In the implementation block
@property (retain) ALAsset * asset;                      //@synthesize asset=_asset - In the implementation block
-(void)dealloc;
-(void)main;
-(ALAsset *)asset;
-(void)setAsset:(ALAsset *)arg1 ;
-(NSCondition *)condition;
-(id)initWithURL:(id)arg1 assetsLibrary:(id)arg2 ;
-(void)setCondition:(NSCondition *)arg1 ;
@end

