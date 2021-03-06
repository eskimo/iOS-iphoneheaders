/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:56:04 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <MapKit/MapKit-Structs.h>
@interface MKQuadTrie : NSObject {

	unsigned _maxItems;
	SCD_Struct_MK1 _minSize;
	SCD_Struct_MK2 _initialRegion;
	void* __root;

}
-(id)initWithInitialRegion:(SCD_Struct_MK2)arg1 minimumSize:(SCD_Struct_MK1)arg2 maximumItems:(unsigned)arg3 ;
-(void)foreach:(/*^block*/id)arg1 ;
-(void)insert:(id)arg1 ;
-(id)itemsInMapRect:(SCD_Struct_MK2)arg1 ;
-(id)itemsPassingRectTest:(/*^block*/id)arg1 coordinateTest:(/*^block*/id)arg2 ;
-(void)clearAllItemsPerforming:(/*^block*/id)arg1 ;
-(id)_itemsInMapRect:(SCD_Struct_MK2)arg1 ;
-(id)breadthFirstDescription;
-(id)depthFirstDescription;
-(id)itemDescriptions;
-(void)dealloc;
-(unsigned)count;
-(id)description;
-(id)allItems;
-(char)contains:(id)arg1 ;
-(char)remove:(id)arg1 ;
@end

