/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:23:44 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileTimer/MobileTimer-Structs.h>
#import <UIKit/UIView.h>
#import <MobileTimer/HandView.h>

@class RenderedHandViewFactory, NSString;

@interface VectorHandView : UIView <HandView> {

	RenderedHandViewFactory* _factory;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)drawRect:(CGRect)arg1 ;
-(id)initWithPDFFile:(id)arg1 offset:(CGPoint)arg2 scale:(CGSize)arg3 bundle:(id)arg4 allowCaching:(BOOL)arg5 ;
@end

