/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 7:33:46 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /usr/libexec/locationd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <locationd/locationd-Structs.h>
#import <ProtocolBuffer/PBCodable.h>

@interface ALSLocation : PBCodable {

	long long _latitude;
	long long _longitude;
	int _accuracy;
	int _altitude;
	int _confidence;
	unsigned _infoMask;
	int _locationType;
	int _reach;
	unsigned _score;
	int _verticalAccuracy;
	SCD_Struct_CR5 _has;

}

@property (assign,nonatomic) long long latitude;                    //@synthesize latitude=_latitude - In the implementation block
@property (assign,nonatomic) long long longitude;                   //@synthesize longitude=_longitude - In the implementation block
@property (assign,nonatomic) int accuracy;                          //@synthesize accuracy=_accuracy - In the implementation block
@property (assign,nonatomic) BOOL hasLocationType; 
@property (assign,nonatomic) int locationType;                      //@synthesize locationType=_locationType - In the implementation block
@property (assign,nonatomic) BOOL hasAltitude; 
@property (assign,nonatomic) int altitude;                          //@synthesize altitude=_altitude - In the implementation block
@property (assign,nonatomic) BOOL hasVerticalAccuracy; 
@property (assign,nonatomic) int verticalAccuracy;                  //@synthesize verticalAccuracy=_verticalAccuracy - In the implementation block
@property (assign,nonatomic) BOOL hasConfidence; 
@property (assign,nonatomic) int confidence;                        //@synthesize confidence=_confidence - In the implementation block
@property (assign,nonatomic) BOOL hasScore; 
@property (assign,nonatomic) unsigned score;                        //@synthesize score=_score - In the implementation block
@property (assign,nonatomic) BOOL hasReach; 
@property (assign,nonatomic) int reach;                             //@synthesize reach=_reach - In the implementation block
@property (assign,nonatomic) BOOL hasInfoMask; 
@property (assign,nonatomic) unsigned infoMask;                     //@synthesize infoMask=_infoMask - In the implementation block
-(BOOL)hasInfoMask;
-(unsigned)infoMask;
-(BOOL)hasReach;
-(int)reach;
-(BOOL)hasLocationType;
-(void)setReach:(int)arg1 ;
-(void)setInfoMask:(unsigned)arg1 ;
-(void)setHasLocationType:(BOOL)arg1 ;
-(void)setHasReach:(BOOL)arg1 ;
-(void)setHasInfoMask:(BOOL)arg1 ;
-(int)confidence;
-(void)setLatitude:(long long)arg1 ;
-(void)setLongitude:(long long)arg1 ;
-(unsigned)score;
-(void)setAccuracy:(int)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(void)setAltitude:(int)arg1 ;
-(void)setHasAltitude:(BOOL)arg1 ;
-(BOOL)hasAltitude;
-(void)setVerticalAccuracy:(int)arg1 ;
-(void)setHasVerticalAccuracy:(BOOL)arg1 ;
-(BOOL)hasVerticalAccuracy;
-(void)setConfidence:(int)arg1 ;
-(void)setHasConfidence:(BOOL)arg1 ;
-(BOOL)hasConfidence;
-(BOOL)readFrom:(id)arg1 ;
-(long long)latitude;
-(long long)longitude;
-(int)verticalAccuracy;
-(int)altitude;
-(void)setLocationType:(int)arg1 ;
-(int)locationType;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setScore:(unsigned)arg1 ;
-(void)setHasScore:(BOOL)arg1 ;
-(BOOL)hasScore;
-(int)accuracy;
@end
