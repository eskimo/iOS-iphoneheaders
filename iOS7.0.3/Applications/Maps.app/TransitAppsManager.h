/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:59:51 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


#import <Maps/Maps-Structs.h>
@class TransitAppRanker;

@interface TransitAppsManager : NSObject {

	TransitAppRanker* _transitAppRanker;

}

@property (nonatomic,retain) TransitAppRanker * transitAppRanker;              //@synthesize transitAppRanker=_transitAppRanker - In the implementation block
+(id)defaultManager;
-(void)updateCoverageFiles;
-(void)recordAppLaunch:(id)arg1 ;
-(void)loadRelevantTransitAppsForSource:(SCD_Struct_Si10)arg1 destination:(SCD_Struct_Si10)arg2 completion:(/*^block*/ id)arg3 ;
-(id)transitAppRanker;
-(id)_installedApps;
-(id)_appIdsStringWithApplicationProxies:(id)arg1 ;
-(void)_updateCoverageFileForAppProxy:(id)arg1 libraryItem:(id)arg2 ;
-(void)setTransitAppRanker:(id)arg1 ;
-(void)dealloc;
@end

