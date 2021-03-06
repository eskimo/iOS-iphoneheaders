/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:36:23 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Watchdog/ThermalMonitor.bundle/ThermalMonitor
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <ThermalMonitor/ThermalMonitor-Structs.h>
@class CommonProduct, NSMutableArray;

@interface TGraphSampler : NSObject {

	CommonProduct* productObj;
	NSMutableArray* listofComponentControl;
	NSMutableArray* listOfSupervisorControl;
	CFArrayRef extraSensorDataSources;
	CFArrayRef extraInternalDataSources;
	CFStringRef tGraphDataString;
	BOOL isInternal;

}
+(id)sharedInstance;
-(int)maxControlEffort;
-(CFDictionaryRef)createPowerLogDictionaryForExtra:(CFArrayRef)arg1 ;
-(void)genTGraphData;
-(CFStringRef)getTGraphData:(int)arg1 ;
-(void)genTGraphHeader;
-(CFStringRef)newSensorName:(long long)arg1 ;
-(void)setTGraphDataString:(CFStringRef)arg1 ;
-(CFDictionaryRef)createPowerLogDictionaryForControlList:(id)arg1 ;
-(void)addInternalDataSource:(id)arg1 ;
-(void)setProduct:(id)arg1 withComponents:(id)arg2 andHotspotSupervisors:(id)arg3 ;
-(CFDictionaryRef)createPowerLogDictionaryForHotspotControl;
-(CFDictionaryRef)createPowerLogDictionaryForComponentControl;
-(CFDictionaryRef)createPowerLogDictionaryForSensors;
-(CFDictionaryRef)createPowerLogDictionaryForFixedHeaders;
-(CFDictionaryRef)createPowerLogDictionaryForExtraInternals;
-(CFDictionaryRef)createPowerLogDictionaryForExtraSensors;
-(void)addSensorDataSource:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(BOOL)isInternalBuild;
@end

