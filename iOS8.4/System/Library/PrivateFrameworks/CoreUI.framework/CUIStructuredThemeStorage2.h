/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:21:54 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol CUIStructuredThemeStorage2
@optional
-(void)removeImageNamed:(id)arg1 withDescription:(id)arg2;
-(void)insertCGImage:(CGImageRef)arg1 withName:(id)arg2 andDescription:(id)arg3;

@required
-(id)imagesWithName:(id)arg1;
-(const renditionkeytoken*)renditionKeyForName:(id)arg1;
-(BOOL)canGetRenditionWithKey:(const renditionkeytoken*)arg1;
-(id)allImageNames;

@end

