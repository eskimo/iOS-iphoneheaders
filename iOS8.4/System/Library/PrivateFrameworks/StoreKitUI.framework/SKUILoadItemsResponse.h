/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:25:51 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSDictionary, NSSet;

@interface SKUILoadItemsResponse : NSObject {

	NSDictionary* _loadedItems;
	NSSet* _invalidItemIdentifiers;

}

@property (nonatomic,copy) NSDictionary * loadedItems;                  //@synthesize loadedItems=_loadedItems - In the implementation block
@property (nonatomic,copy) NSSet * invalidItemIdentifiers;              //@synthesize invalidItemIdentifiers=_invalidItemIdentifiers - In the implementation block
-(NSDictionary *)loadedItems;
-(void)setLoadedItems:(NSDictionary *)arg1 ;
-(void)setInvalidItemIdentifiers:(NSSet *)arg1 ;
-(NSSet *)invalidItemIdentifiers;
@end
