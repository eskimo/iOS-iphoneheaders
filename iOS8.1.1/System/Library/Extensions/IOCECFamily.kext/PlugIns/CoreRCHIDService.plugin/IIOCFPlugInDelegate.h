/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:27:30 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Extensions/IOCECFamily.kext/PlugIns/CoreRCHIDService.plugin/CoreRCHIDService
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol IIOCFPlugInDelegate <IUnknownDelegate>
@required
-(int)startWithIOService:(unsigned)arg1 propertyTable:(id)arg2;
-(int)probeIOService:(unsigned)arg1 propertyTable:(id)arg2 order:(int*)arg3;
-(int)stop;

@end
