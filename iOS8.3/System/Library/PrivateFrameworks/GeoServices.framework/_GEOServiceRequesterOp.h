/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 1:52:25 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/PBRequesterDelegate.h>

@class PBRequest, NSString, GEORequester, NSNumber;

@interface _GEOServiceRequesterOp : NSObject <PBRequesterDelegate> {

	PBRequest* _request;
	NSString* _debugRequestName;
	unsigned _urlType;
	/*^block*/id _completionHandler;
	char _cancelled;
	GEORequester* _requester;
	NSString* _appIdentifier;
	NSNumber* _serviceTypeNumber;
	double _timeout;
	int _experimentType;
	int _experimentDispatcherRequestType;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)cancel;
-(void)dealloc;
-(void)_cleanup;
-(void)requesterDidFinish:(id)arg1 ;
-(void)requesterDidCancel:(id)arg1 ;
-(void)requester:(id)arg1 didFailWithError:(id)arg2 ;
-(void)startWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)initWithRequest:(id)arg1 appIdentifier:(id)arg2 urlType:(unsigned)arg3 debugRequestName:(id)arg4 serviceType:(id)arg5 experimentType:(int)arg6 experimentDispatcherRequestType:(int)arg7 timeout:(double)arg8 ;
@end

