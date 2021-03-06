/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 4:37:24 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>
#import <itunesstored/ISURLOperationDelegate.h>

@class SSAuthenticationContext, NSURL, SSURLRequestProperties, SSURLConnectionResponse, NSString;

@interface URLConnectionRequestOperation : ISOperation <ISURLOperationDelegate> {

	SSAuthenticationContext* _authenticationContext;
	NSURL* _destinationFileURL;
	SSURLRequestProperties* _properties;
	SSURLConnectionResponse* _response;
	char _sendsResponseForHTTPFailures;
	char _shouldMescalSign;

}

@property (readonly) SSURLRequestProperties * requestProperties; 
@property (copy) SSAuthenticationContext * authenticationContext; 
@property (copy) NSURL * destinationFileURL; 
@property (assign) char sendsResponseForHTTPFailures; 
@property (assign) char shouldMescalSign; 
@property (readonly) SSURLConnectionResponse * URLResponse; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_newStoreURLOperationWithProperties:(id)arg1 ;
-(void)_importKeybagFromDictionary:(id)arg1 ;
-(id)_metricsPageEventWithResponse:(id)arg1 performance:(id)arg2 ;
-(void)_addKBSyncDataToRequestProperties:(id)arg1 forAccountID:(id)arg2 ;
-(char)_shouldSendMachineDataHeadersForProperties:(id)arg1 ;
-(id)initWithRequestProperties:(id)arg1 ;
-(void)setShouldMescalSign:(char)arg1 ;
-(void)setAuthenticationContext:(SSAuthenticationContext *)arg1 ;
-(void)dealloc;
-(void)run;
-(SSURLRequestProperties *)requestProperties;
-(SSURLConnectionResponse *)URLResponse;
-(NSURL *)destinationFileURL;
-(char)sendsResponseForHTTPFailures;
-(char)shouldMescalSign;
-(void)setSendsResponseForHTTPFailures:(char)arg1 ;
-(void)setDestinationFileURL:(NSURL *)arg1 ;
-(id)_accountIdentifier;
-(SSAuthenticationContext *)authenticationContext;
-(char)operation:(id)arg1 processData:(id)arg2 error:(id*)arg3 ;
-(void)operation:(id)arg1 willSendRequest:(id)arg2 ;
-(void)operation:(id)arg1 didAuthenticateWithDSID:(id)arg2 ;
@end

