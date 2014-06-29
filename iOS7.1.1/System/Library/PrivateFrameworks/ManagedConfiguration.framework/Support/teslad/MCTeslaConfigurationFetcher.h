/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 4:14:53 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/Support/teslad
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <teslad/teslad-Structs.h>
#import <ManagedConfiguration/MCTeslaConfigurationFetchInterface.h>
#import <ManagedConfiguration/NSURLConnectionDataDelegate.h>
#import <libTelephonyUtilDynamic.dylib/NSURLConnectionDelegate.h>

@class NSXPCConnection, NSTimer, NSURLConnection, NSError, NSMutableData, NSData, NSURL;

@interface MCTeslaConfigurationFetcher : NSObject <MCTeslaConfigurationFetchInterface, NSURLConnectionDataDelegate, NSURLConnectionDelegate> {

	NSXPCConnection* _remoteProcessConnection;
	/*^block*/ id _completionBlock;
	int _state;
	int _certFetchCount;
	int _sessionKeyFetchCount;
	int _configFetchCount;
	NACContextOpaque_Ref _context;
	NSTimer* _timeoutTimer;
	NSURLConnection* _urlConnection;
	int _httpResponseCode;
	int _expectedLength;
	NSError* _fatalError;
	NSMutableData* _certificate;
	NSData* _sessionRequestInfo;
	NSMutableData* _sessionInfo;
	NSMutableData* _configurationData;
	NSError* _error;
	double _retryAfterInterval;

}

@property (nonatomic,retain) NSXPCConnection * remoteProcessConnection;              //@synthesize remoteProcessConnection=_remoteProcessConnection - In the implementation block
@property (nonatomic,copy) id completionBlock;                                       //@synthesize completionBlock=_completionBlock - In the implementation block
@property (readonly) NSURL * certificateURL; 
@property (readonly) NSURL * sessionURL; 
@property (readonly) NSURL * profileURL; 
@property (assign,nonatomic) int state;                                              //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) int certFetchCount;                                     //@synthesize certFetchCount=_certFetchCount - In the implementation block
@property (assign,nonatomic) int sessionKeyFetchCount;                               //@synthesize sessionKeyFetchCount=_sessionKeyFetchCount - In the implementation block
@property (assign,nonatomic) int configFetchCount;                                   //@synthesize configFetchCount=_configFetchCount - In the implementation block
@property (assign,nonatomic) NACContextOpaque_Ref context;                           //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) NSTimer * timeoutTimer;                                 //@synthesize timeoutTimer=_timeoutTimer - In the implementation block
@property (nonatomic,retain) NSURLConnection * urlConnection;                        //@synthesize urlConnection=_urlConnection - In the implementation block
@property (assign,nonatomic) int httpResponseCode;                                   //@synthesize httpResponseCode=_httpResponseCode - In the implementation block
@property (assign,nonatomic) int expectedLength;                                     //@synthesize expectedLength=_expectedLength - In the implementation block
@property (assign,nonatomic) double retryAfterInterval;                              //@synthesize retryAfterInterval=_retryAfterInterval - In the implementation block
@property (nonatomic,retain) NSError * fatalError;                                   //@synthesize fatalError=_fatalError - In the implementation block
@property (nonatomic,retain) NSMutableData * certificate;                            //@synthesize certificate=_certificate - In the implementation block
@property (nonatomic,retain) NSData * sessionRequestInfo;                            //@synthesize sessionRequestInfo=_sessionRequestInfo - In the implementation block
@property (nonatomic,retain) NSMutableData * sessionInfo;                            //@synthesize sessionInfo=_sessionInfo - In the implementation block
@property (nonatomic,retain) NSMutableData * configurationData;                      //@synthesize configurationData=_configurationData - In the implementation block
@property (nonatomic,retain) NSError * error;                                        //@synthesize error=_error - In the implementation block
+(id)cloudValidationRules;
-(void)setRemoteProcessConnection:(id)arg1 ;
-(id)urlConnection;
-(void)setUrlConnection:(id)arg1 ;
-(void)setConfigurationData:(id)arg1 ;
-(void)enterState:(int)arg1 ;
-(id)daemonBusyError;
-(void)setFatalError:(id)arg1 ;
-(void)setHttpResponseCode:(int)arg1 ;
-(double)retryIntervalForState:(int)arg1 ;
-(void)setRetryAfterInterval:(double)arg1 ;
-(id)internalError;
-(int)certFetchCount;
-(void)setCertFetchCount:(int)arg1 ;
-(id)maxRetriesExceededError;
-(int)sessionKeyFetchCount;
-(void)setSessionKeyFetchCount:(int)arg1 ;
-(int)configFetchCount;
-(void)setConfigFetchCount:(int)arg1 ;
-(void)startCertificateFetch;
-(void)initializeAbsinthe;
-(void)startSessionKeyFetch;
-(void)establishAbsintheSession;
-(void)startConfigurationFetch;
-(void)sendConfigurationInfoToRemote;
-(double)retryAfterInterval;
-(void)startRetryTimerWithInterval:(double)arg1 ;
-(void)sendFailureNoticeToRemote;
-(void)setSessionRequestInfo:(id)arg1 ;
-(id)absintheErrorWithOSStatus:(long)arg1 ;
-(void)retrySessionKeyFetchIfAllowedAfterDelay:(BOOL)arg1 orFailWithError:(id)arg2 ;
-(void)startURLRequest;
-(id)sessionURL;
-(id)sessionRequestInfo;
-(id)profileRequestDictionary;
-(id)profileURL;
-(id)configurationData;
-(id)badFormatError;
-(BOOL)convertCloudConfigDictionary:(id)arg1 toManagedConfiguration:(id*)arg2 ;
-(int)httpResponseCode;
-(id)serverTrustError;
-(id)teslaServiceDownError;
-(id)invalidDeviceError;
-(id)teslaServiceBusyError;
-(void)retryConfigurationFetchIfAllowedAfterDelay:(BOOL)arg1 orFailWithError:(id)arg2 ;
-(id)fatalError;
-(void)retryCertificateFetchIfAllowedAfterDelay:(BOOL)arg1 orFailWithError:(id)arg2 ;
-(void)timeoutTimerDidFire:(id)arg1 ;
-(id)remoteProcessConnection;
-(void)setError:(id)arg1 ;
-(id)certificateURL;
-(void)dealloc;
-(int)state;
-(void)setState:(int)arg1 ;
-(NACContextOpaque_Ref)context;
-(void)setContext:(NACContextOpaque_Ref)arg1 ;
-(void)setCompletionBlock:(/*^block*/ id)arg1 ;
-(/*^block*/ id)completionBlock;
-(void)connection:(id)arg1 didFailWithError:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveData:(id)arg2 ;
-(void)connectionDidFinishLoading:(id)arg1 ;
-(void)connection:(id)arg1 didReceiveResponse:(id)arg2 ;
-(void).cxx_destruct;
-(id)descriptionForState:(int)arg1 ;
-(void)setTimeoutTimer:(id)arg1 ;
-(id)timeoutTimer;
-(void)fetchConfigurationWithCompletionBlock:(/*^block*/ id)arg1 ;
-(void)setExpectedLength:(int)arg1 ;
-(int)expectedLength;
-(id)error;
-(id)sessionInfo;
-(void)setSessionInfo:(id)arg1 ;
-(id)certificate;
-(void)setCertificate:(id)arg1 ;
-(id)initWithXPCConnection:(id)arg1 ;
-(void)connection:(id)arg1 willSendRequestForAuthenticationChallenge:(id)arg2 ;
@end
