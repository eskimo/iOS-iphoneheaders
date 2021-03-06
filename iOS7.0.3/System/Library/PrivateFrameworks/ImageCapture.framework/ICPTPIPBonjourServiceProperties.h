/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:55:33 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


#import <ImageCapture/ImageCapture-Structs.h>
@class NSString, NSDictionary, NSMutableArray;

@interface ICPTPIPBonjourServiceProperties : NSObject {

	CFSocketRef _hostSocket;
	NSString* _hostName;
	unsigned short _hostPort;
	NSString* _hostGUID;
	unsigned long _hostMaxConnections;
	int _hostSecuritylevel;
	NSString* _serviceType;
	NSDictionary* _txtRecordsDict;
	CFNetServiceRef _publishedService;
	NSMutableArray* _clients;
	int _clientSpinLock;
	id _delegate;
	int _clientsSpinLock;

}

@property (assign) CFSocketRef hostSocket;                        //@synthesize hostSocket=_hostSocket - In the implementation block
@property (retain) NSString * hostName;                           //@synthesize hostName=_hostName - In the implementation block
@property (assign) unsigned short hostPort;                       //@synthesize hostPort=_hostPort - In the implementation block
@property (retain) NSString * hostGUID;                           //@synthesize hostGUID=_hostGUID - In the implementation block
@property (assign) unsigned long hostMaxConnections;              //@synthesize hostMaxConnections=_hostMaxConnections - In the implementation block
@property (assign) int hostSecurityLevel;                         //@synthesize hostSecuritylevel=_hostSecuritylevel - In the implementation block
@property (retain) NSString * serviceType;                        //@synthesize serviceType=_serviceType - In the implementation block
@property (retain) NSDictionary * txtRecordsDict;                 //@synthesize txtRecordsDict=_txtRecordsDict - In the implementation block
@property (assign) CFNetServiceRef publishedService;              //@synthesize publishedService=_publishedService - In the implementation block
@property (retain) NSMutableArray * clients;                      //@synthesize clients=_clients - In the implementation block
@property (assign) int clientsSpinLock;                           //@synthesize clientsSpinLock=_clientsSpinLock - In the implementation block
@property (assign) id delegate;                                   //@synthesize delegate=_delegate - In the implementation block
-(id)hostName;
-(void)setHostName:(id)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(void)setServiceType:(id)arg1 ;
-(id)serviceType;
-(void)setClients:(id)arg1 ;
-(void)setHostGUID:(id)arg1 ;
-(void)setTxtRecordsDict:(id)arg1 ;
-(CFSocketRef)hostSocket;
-(void)setHostSocket:(CFSocketRef)arg1 ;
-(unsigned short)hostPort;
-(void)setHostPort:(unsigned short)arg1 ;
-(id)hostGUID;
-(unsigned long)hostMaxConnections;
-(void)setHostMaxConnections:(unsigned long)arg1 ;
-(int)hostSecurityLevel;
-(void)setHostSecurityLevel:(int)arg1 ;
-(id)txtRecordsDict;
-(CFNetServiceRef)publishedService;
-(void)setPublishedService:(CFNetServiceRef)arg1 ;
-(id)clients;
-(int)clientsSpinLock;
-(void)setClientsSpinLock:(int)arg1 ;
-(void)finalize;
@end

