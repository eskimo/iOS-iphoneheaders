/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:18:27 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol PKPassGroupViewDelegate <NSObject>
@optional
-(void)groupViewTapped:(id)arg1;
-(void)groupView:(id)arg1 didBeginShowingFontmostPassView:(id)arg2;
-(void)groupView:(id)arg1 didEndShowingFontmostPassView:(id)arg2;
-(BOOL)groupViewShouldAllowPanning:(id)arg1;
-(void)groupViewPanDidBegin:(id)arg1;
-(void)groupViewPanDidEnd:(id)arg1;
-(void)groupView:(id)arg1 panned:(CGPoint)arg2 withVelocity:(CGPoint)arg3;
-(void)groupViewDidUpdatePageControlVisibility:(id)arg1;
-(BOOL)groupViewShouldAllowPassFlip:(id)arg1;
-(void)groupViewFrontPassDidFlip:(id)arg1 animated:(BOOL)arg2;
-(void)groupView:(id)arg1 didUpdatePassView:(id)arg2;
-(void)groupView:(id)arg1 deleteButtonPressedForPass:(id)arg2;
-(BOOL)groupView:(id)arg1 deleteButtonEnabledForPass:(id)arg2;
-(void)groupView:(id)arg1 flipButtonPressedForPass:(id)arg2;
-(BOOL)groupViewPassesGrowWhenFlipped:(id)arg1;
-(BOOL)groupViewPassesGrowCenteredWhenFlipped:(id)arg1;
-(unsigned long long)groupViewPassesSuppressedContent:(id)arg1;
-(id)groupViewReusablePassViewQueue:(id)arg1;
-(long long)groupViewContentModeForFrontmostPassWhenStacked:(id)arg1;

@end

