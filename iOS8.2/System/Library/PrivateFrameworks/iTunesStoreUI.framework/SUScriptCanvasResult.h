/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:21:31 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
@class UIImage;

@interface SUScriptCanvasResult : NSObject {

	UIImage* _image;
	CGPathRef _path;

}

@property (nonatomic,readonly) UIImage * canvasImage;              //@synthesize image=_image - In the implementation block
@property (nonatomic,readonly) CGPathRef canvasPath;               //@synthesize path=_path - In the implementation block
-(void)dealloc;
-(UIImage *)canvasImage;
-(id)_initWithCanvas:(id)arg1 ;
-(CGPathRef)canvasPath;
@end

