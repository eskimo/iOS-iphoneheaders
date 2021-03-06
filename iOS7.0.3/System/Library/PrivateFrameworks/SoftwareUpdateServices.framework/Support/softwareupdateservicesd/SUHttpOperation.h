/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:07:59 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/Support/softwareupdateservicesd
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>
#import <ManagedConfiguration/NSURLConnectionDataDelegate.h>

@class NSURLConnection, NSURLRequest, NSMutableData, NSURLResponse, NSError;

@interface SUHttpOperation : NSOperation <NSURLConnectionDataDelegate> {

	NSURLConnection* _connection;
	NSURLRequest* _request;
	NSMutableData* _data;
	NSURLResponse* _response;
	NSError* _error;
	int _statusCode;
	BOOL _allowRedirects;
	BOOL _done;
	BOOL _saveData;

}

@property (nonatomic,retain) NSURLRequest * request;                //@synthesize request=_request - In the implementation block
@property (nonatomic,retain) NSMutableData * data;                  //@synthesize data=_data - In the implementation block
@property (nonatomic,retain) NSURLResponse * response;              //@synthesize response=_response - In the implementation block
@property (nonatomic,retain) NSError * error;                       //@synthesize error=_error - In the implementation block
@property (assign,nonatomic) int statusCode;                        //@synthesize statusCode=_statusCode - In the implementation block
@property (assign,nonatomic) BOOL allowRedirects;                   //@synthesize allowRedirects=_allowRedirects - In the implementation block
-(void)_finished;
-(BOOL)allowRedirects;
-(void)setAllowRedirects:(BOOL)arg1 ;
-(void)setResponse:(id)arg1 ;
-(id)connection:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3 ;
-(void)setError:(id)arg1 ;
-(void)setRequest:(id)arg1 ;
-(void)dealloc;
-(id)data;
-(void)setData:(id)arg1 ;
-(id)initWithRequest:(id)arg1 ;
-(void)main;
-(id)response;
-(id)request;
-(int)statusCode;
-(void)connection:(id)arg1 didFailWithError:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveData:(id)arg2 ;
-(void)connectionDidFinishLoading:(id)arg1 ;
-(void)connection:(id)arg1 didReceiveResponse:(id)arg2 ;
-(void)setStatusCode:(int)arg1 ;
-(id)error;
@end

