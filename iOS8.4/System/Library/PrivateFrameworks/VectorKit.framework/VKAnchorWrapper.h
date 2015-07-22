/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:26:26 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <VectorKit/VKAnchorDelegate.h>

@class VKAnchor, VKLayoutContext, MDDisplayLayer, NSString;

@interface VKAnchorWrapper : NSObject <VKAnchorDelegate> {

	VKAnchor* _anchor;
	BOOL _followsTerrain;
	CGPoint _screenPointInCanvas;
	VKLayoutContext* _lastLayoutContext;
	CGSize _lastCoordinate;
	BOOL _isUpdating;
	double _pointsPerMeter;
	MDDisplayLayer* _displayLayer;

}

@property (nonatomic,readonly) CGSize coordinate; 
@property (assign,nonatomic) BOOL followsTerrain;                        //@synthesize followsTerrain=_followsTerrain - In the implementation block
@property (assign,nonatomic) MDDisplayLayer * displayLayer;              //@synthesize displayLayer=_displayLayer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)updateIfNeeded;
-(void)setDisplayLayer:(MDDisplayLayer *)arg1 ;
-(void)layoutWithContext:(id)arg1 ;
-(CGSize)coordinate;
-(BOOL)followsTerrain;
-(void)anchorWorldPointDidChange:(void*)arg1 ;
-(void)setFollowsTerrain:(BOOL)arg1 ;
-(id)_anchorWithContext:(id)arg1 ;
-(void)_updateCachedPointWithContext:(id)arg1 ;
-(CGPoint)pointInLayer:(id)arg1 ;
-(double)pointOffsetForDistanceOffset:(double)arg1 ;
-(MDDisplayLayer *)displayLayer;
@end
