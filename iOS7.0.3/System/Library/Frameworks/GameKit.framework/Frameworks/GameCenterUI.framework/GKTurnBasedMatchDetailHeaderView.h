/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:52:35 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterUI.framework/GameCenterUI
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <GameCenterUI/GameCenterUI-Structs.h>
#import <UIKit/UICollectionReusableView.h>

@class GKTurnBasedMatch, GKTextBubbleControl, NSString, GKLabel, NSArray;

@interface GKTurnBasedMatchDetailHeaderView : UICollectionReusableView {

	GKTurnBasedMatch* _match;
	GKTextBubbleControl* _actionBubble;
	NSString* _infoText;
	GKLabel* _playingWithLabel;
	GKLabel* _startedLabel;
	GKLabel* _lastTurnLabel;
	GKLabel* _infoLabel;
	NSArray* _replaceableConstraints;

}

@property (nonatomic,retain) GKTurnBasedMatch * match;                        //@synthesize match=_match - In the implementation block
@property (nonatomic,copy) NSString * bubbleText; 
@property (assign,nonatomic) int bubbleType; 
@property (nonatomic,retain) GKTextBubbleControl * actionBubble;              //@synthesize actionBubble=_actionBubble - In the implementation block
@property (nonatomic,retain) NSString * infoText;                             //@synthesize infoText=_infoText - In the implementation block
@property (nonatomic,retain) GKLabel * playingWithLabel;                      //@synthesize playingWithLabel=_playingWithLabel - In the implementation block
@property (nonatomic,retain) GKLabel * startedLabel;                          //@synthesize startedLabel=_startedLabel - In the implementation block
@property (nonatomic,retain) GKLabel * lastTurnLabel;                         //@synthesize lastTurnLabel=_lastTurnLabel - In the implementation block
@property (nonatomic,retain) GKLabel * infoLabel;                             //@synthesize infoLabel=_infoLabel - In the implementation block
@property (nonatomic,readonly) NSString * playingWithString; 
@property (nonatomic,retain) NSArray * replaceableConstraints;                //@synthesize replaceableConstraints=_replaceableConstraints - In the implementation block
+(BOOL)requiresConstraintBasedLayout;
-(void)didUpdateModel;
-(id)match;
-(void)setMatch:(id)arg1 ;
-(void)setBubbleType:(int)arg1 ;
-(int)bubbleType;
-(id)playingWithLabel;
-(id)startedLabel;
-(id)lastTurnLabel;
-(id)actionBubble;
-(void)setInfoText:(id)arg1 ;
-(void)setBubbleText:(id)arg1 ;
-(id)replaceableConstraints;
-(void)setReplaceableConstraints:(id)arg1 ;
-(id)playingWithString;
-(id)bubbleText;
-(void)setActionBubble:(id)arg1 ;
-(id)infoText;
-(void)setPlayingWithLabel:(id)arg1 ;
-(void)setStartedLabel:(id)arg1 ;
-(void)setLastTurnLabel:(id)arg1 ;
-(void)setInfoLabel:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)updateConstraints;
-(id)infoLabel;
@end

