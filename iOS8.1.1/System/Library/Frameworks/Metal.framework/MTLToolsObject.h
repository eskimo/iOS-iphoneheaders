/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:28:39 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <Metal/Metal-Structs.h>
@interface MTLToolsObject : NSObject {

	id _baseObject;
	MTLToolsObject* _parent;
	ILayerLockingPolicy* _lockingPolicy;

}

@property (nonatomic,retain) id baseObject;                                   //@synthesize baseObject=_baseObject - In the implementation block
@property (nonatomic,__weak,readonly) MTLToolsObject * parent;                //@synthesize parent=_parent - In the implementation block
@property (nonatomic,readonly) MTLToolsObject * strongParent; 
@property (assign,nonatomic) ILayerLockingPolicy* lockingPolicy;              //@synthesize lockingPolicy=_lockingPolicy - In the implementation block
+(void)visitObjects:(id)arg1 withVisitor:(id)arg2 ;
+(id)dispatchQueue;
-(ILayerLockingPolicy*)lockingPolicy;
-(id)baseObject;
-(void)acceptVisitor:(id)arg1 ;
-(id)initWithBaseObject:(id)arg1 parent:(id)arg2 ;
-(id)initWithBaseObject:(id)arg1 parent:(id)arg2 lockingPolicy:(ILayerLockingPolicy*)arg3 ;
-(void)setBaseObject:(id)arg1 ;
-(void)setLockingPolicy:(ILayerLockingPolicy*)arg1 ;
-(id)baseObjectWithClass:(Class)arg1 ;
-(id)originalObject;
-(void)setOriginalObject:(id)arg1 ;
-(MTLToolsObject *)strongParent;
-(void)dealloc;
-(id)description;
-(MTLToolsObject *)parent;
@end

