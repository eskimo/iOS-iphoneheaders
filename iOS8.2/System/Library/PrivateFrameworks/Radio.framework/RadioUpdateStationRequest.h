/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:20:55 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/Radio.framework/Radio
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Radio/RadioSyncRequest.h>

@class RadioStation, NSString, NSArray;

@interface RadioUpdateStationRequest : RadioSyncRequest {

	RadioStation* _station;
	NSString* _name;
	NSString* _stationDescription;
	NSArray* _seeds;
	int _songMixType;

}

@property (nonatomic,copy) NSString * name;                            //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * stationDescription;              //@synthesize stationDescription=_stationDescription - In the implementation block
@property (nonatomic,copy) NSArray * seeds;                            //@synthesize seeds=_seeds - In the implementation block
@property (assign,nonatomic) int songMixType;                          //@synthesize songMixType=_songMixType - In the implementation block
-(NSArray *)seeds;
-(void)setSeeds:(NSArray *)arg1 ;
-(id)initWithStation:(id)arg1 ;
-(NSString *)stationDescription;
-(id)init;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(void)startWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setStationDescription:(NSString *)arg1 ;
-(id)changeList;
-(id)_updatedStationDictionary;
-(void)setSongMixType:(int)arg1 ;
-(int)songMixType;
@end

