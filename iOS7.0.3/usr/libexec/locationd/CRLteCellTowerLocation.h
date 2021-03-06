/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:19:02 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /usr/libexec/locationd
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <locationd/locationd-Structs.h>
#import <ProtocolBuffer/PBCodable.h>

@class NSString, CRLocation, NSMutableArray;

@interface CRLteCellTowerLocation : PBCodable {

	double _cellLatitude;
	double _cellLongitude;
	NSString* _appBundleId;
	int _bandInfo;
	int _ci;
	int _ecn0;
	CRLocation* _location;
	int _mcc;
	int _mnc;
	NSMutableArray* _neighbors;
	NSString* _operatorName;
	int _pid;
	int _rscp;
	int _rssi;
	int _serverHash;
	int _tac;
	int _uarfcn;
	SCD_Struct_CR18 _has;

}

@property (assign,nonatomic) int mcc;                                 //@synthesize mcc=_mcc - In the implementation block
@property (assign,nonatomic) int mnc;                                 //@synthesize mnc=_mnc - In the implementation block
@property (assign,nonatomic) int tac;                                 //@synthesize tac=_tac - In the implementation block
@property (assign,nonatomic) int ci;                                  //@synthesize ci=_ci - In the implementation block
@property (assign,nonatomic) BOOL hasUarfcn; 
@property (assign,nonatomic) int uarfcn;                              //@synthesize uarfcn=_uarfcn - In the implementation block
@property (assign,nonatomic) BOOL hasPid; 
@property (assign,nonatomic) int pid;                                 //@synthesize pid=_pid - In the implementation block
@property (assign,nonatomic) BOOL hasBandInfo; 
@property (assign,nonatomic) int bandInfo;                            //@synthesize bandInfo=_bandInfo - In the implementation block
@property (nonatomic,retain) CRLocation * location;                   //@synthesize location=_location - In the implementation block
@property (nonatomic,readonly) BOOL hasAppBundleId; 
@property (nonatomic,retain) NSString * appBundleId;                  //@synthesize appBundleId=_appBundleId - In the implementation block
@property (nonatomic,readonly) BOOL hasOperatorName; 
@property (nonatomic,retain) NSString * operatorName;                 //@synthesize operatorName=_operatorName - In the implementation block
@property (assign,nonatomic) BOOL hasCellLatitude; 
@property (assign,nonatomic) double cellLatitude;                     //@synthesize cellLatitude=_cellLatitude - In the implementation block
@property (assign,nonatomic) BOOL hasCellLongitude; 
@property (assign,nonatomic) double cellLongitude;                    //@synthesize cellLongitude=_cellLongitude - In the implementation block
@property (assign,nonatomic) BOOL hasServerHash; 
@property (assign,nonatomic) int serverHash;                          //@synthesize serverHash=_serverHash - In the implementation block
@property (assign,nonatomic) BOOL hasEcn0; 
@property (assign,nonatomic) int ecn0;                                //@synthesize ecn0=_ecn0 - In the implementation block
@property (assign,nonatomic) BOOL hasRscp; 
@property (assign,nonatomic) int rscp;                                //@synthesize rscp=_rscp - In the implementation block
@property (assign,nonatomic) BOOL hasRssi; 
@property (assign,nonatomic) int rssi;                                //@synthesize rssi=_rssi - In the implementation block
@property (nonatomic,retain) NSMutableArray * neighbors;              //@synthesize neighbors=_neighbors - In the implementation block
-(void)setOperatorName:(id)arg1 ;
-(int)mcc;
-(int)mnc;
-(BOOL)hasUarfcn;
-(int)uarfcn;
-(void)setMcc:(int)arg1 ;
-(void)setMnc:(int)arg1 ;
-(BOOL)hasServerHash;
-(int)serverHash;
-(void)setServerHash:(int)arg1 ;
-(void)setHasServerHash:(BOOL)arg1 ;
-(void)setNeighbors:(id)arg1 ;
-(int)ci;
-(void)setCi:(int)arg1 ;
-(void)setRssi:(int)arg1 ;
-(BOOL)hasOperatorName;
-(BOOL)hasEcn0;
-(int)ecn0;
-(void)setEcn0:(int)arg1 ;
-(BOOL)hasRscp;
-(int)rscp;
-(void)setRscp:(int)arg1 ;
-(unsigned)neighborsCount;
-(void)clearNeighbors;
-(void)setHasEcn0:(BOOL)arg1 ;
-(void)setHasRscp:(BOOL)arg1 ;
-(id)neighbors;
-(void)setTac:(int)arg1 ;
-(void)setUarfcn:(int)arg1 ;
-(void)setBandInfo:(int)arg1 ;
-(void)setHasUarfcn:(BOOL)arg1 ;
-(int)tac;
-(BOOL)hasBandInfo;
-(int)bandInfo;
-(BOOL)hasCellLatitude;
-(double)cellLatitude;
-(void)setCellLatitude:(double)arg1 ;
-(BOOL)hasCellLongitude;
-(double)cellLongitude;
-(void)setCellLongitude:(double)arg1 ;
-(BOOL)hasRssi;
-(void)setHasBandInfo:(BOOL)arg1 ;
-(void)setHasCellLatitude:(BOOL)arg1 ;
-(void)setHasCellLongitude:(BOOL)arg1 ;
-(void)setHasRssi:(BOOL)arg1 ;
-(int)rssi;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)location;
-(id)dictionaryRepresentation;
-(id)neighborAtIndex:(unsigned)arg1 ;
-(void)addNeighbor:(id)arg1 ;
-(int)pid;
-(void)setPid:(int)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setLocation:(id)arg1 ;
-(id)operatorName;
-(void)setAppBundleId:(id)arg1 ;
-(BOOL)hasAppBundleId;
-(id)appBundleId;
-(BOOL)hasPid;
-(void)setHasPid:(BOOL)arg1 ;
@end

