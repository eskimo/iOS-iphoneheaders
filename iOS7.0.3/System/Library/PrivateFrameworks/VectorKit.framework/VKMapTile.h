/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:58:12 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <VectorKit/VKTile.h>
#import <CoreFoundation/NSCopying.h>

@class VKTile, VKRasterTile;

@interface VKMapTile : VKTile <NSCopying> {

	VKTile* _tiles[29];
	unsigned _states[29];
	double _stateDates[29];
	id _stateMetas[29];
	VGLColor _localBounds[29];
	VKRasterTile* _rasterized;
	BOOL _needsRasterization;
	float _maximumStyleZ;
	shared_ptr<vk::InfoMapTile>* _infoMapTile;

}

@property (nonatomic,readonly) float maximumStyleZ;                                 //@synthesize maximumStyleZ=_maximumStyleZ - In the implementation block
@property (nonatomic,retain) VKRasterTile * rasterized;                             //@synthesize rasterized=_rasterized - In the implementation block
@property (assign,nonatomic) BOOL needsRasterization;                               //@synthesize needsRasterization=_needsRasterization - In the implementation block
@property (assign,nonatomic) shared_ptr<vk::InfoMapTile>* infoMapTile;              //@synthesize infoMapTile=_infoMapTile - In the implementation block
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(id).cxx_construct;
-(id)initWithKey:(const VKTileKey*)arg1 ;
-(void)updateViewDependentStateWithContext:(id)arg1 ;
-(id)detailedDescription;
-(id)tileForLayer:(unsigned)arg1 ;
-(float)maximumStyleZ;
-(id)rasterized;
-(unsigned)tileStateForLayer:(unsigned)arg1 ;
-(shared_ptr<vk::InfoMapTile>*)infoMapTile;
-(void)setInfoMapTile:(shared_ptr<vk::InfoMapTile>*)arg1 ;
-(void)setRasterized:(id)arg1 ;
-(void)setTile:(id)arg1 state:(unsigned)arg2 metadata:(id)arg3 forLayer:(unsigned)arg4 ;
-(void)setNeedsRasterization:(BOOL)arg1 ;
-(BOOL)needsRasterization;
-(VGLColor)localBoundsForLayer:(unsigned)arg1 ;
-(void).cxx_destruct;
@end

