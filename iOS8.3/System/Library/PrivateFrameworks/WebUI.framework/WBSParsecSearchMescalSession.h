/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 4:22:05 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <WebUI/WebUI-Structs.h>
@interface WBSParsecSearchMescalSession : NSObject {

	char _complete;
	FPSAPContextOpaque_Ref _session;
	FairPlayHWInfo_ _hardwareInfo;
	unsigned _versionNumber;

}
-(void)dealloc;
-(id)init;
-(char)_getHardwareInfo:(FairPlayHWInfo_*)arg1 ;
-(id)initWithVersionNumber:(unsigned)arg1 ;
-(id)exchangedDataForData:(id)arg1 ;
-(id)signatureStringForData:(id)arg1 ;
@end
