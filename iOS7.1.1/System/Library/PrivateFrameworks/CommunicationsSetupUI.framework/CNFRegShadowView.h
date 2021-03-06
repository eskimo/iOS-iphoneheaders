/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:01 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CommunicationsSetupUI/CommunicationsSetupUI-Structs.h>
#import <UIKit/UIView.h>

@class UIBezierPath, UIImage;

@interface CNFRegShadowView : UIView {

	CGRect _cachedBounds;
	UIBezierPath* _cachedPath;
	UIImage* _shadowImage;

}

@property (assign,nonatomic) CGRect cachedBounds;                    //@synthesize cachedBounds=_cachedBounds - In the implementation block
@property (nonatomic,retain) UIBezierPath * cachedPath;              //@synthesize cachedPath=_cachedPath - In the implementation block
@property (nonatomic,retain) UIImage * shadowImage;                  //@synthesize shadowImage=_shadowImage - In the implementation block
-(void)dealloc;
-(void)drawRect:(CGRect)arg1 ;
-(id)shadowImage;
-(void)setShadowImage:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 shadowImage:(id)arg2 ;
-(CGRect)cachedBounds;
-(void)setCachedPath:(id)arg1 ;
-(id)cachedPath;
-(void)setCachedBounds:(CGRect)arg1 ;
@end

