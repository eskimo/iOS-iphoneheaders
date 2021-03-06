/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:33:49 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/Search.framework/Search
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSArray, NSDictionary;

@interface SPBundleManager : NSObject {

	NSArray* _searchBundles;
	NSArray* _datastores;
	NSDictionary* _domainMap;

}

@property (nonatomic,readonly) NSArray * searchBundles; 
@property (nonatomic,readonly) NSArray * datastores; 
+(id)sharedManager;
-(void)dealloc;
-(id)datastoreForDomain:(unsigned)arg1 ;
-(void)lockDatastore:(id)arg1 ;
-(void)unlockDatastore:(id)arg1 ;
-(void)_loadSearchBundles;
-(NSArray *)searchBundles;
-(void)createLockForDatastore:(id)arg1 ;
-(NSArray *)datastores;
-(id)domainMap;
-(void)resetDatastores;
@end

