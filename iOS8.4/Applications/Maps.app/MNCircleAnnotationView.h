/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:38 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MapKit/MKAnnotationView.h>

@class CALayer;

@interface MNCircleAnnotationView : MKAnnotationView {

	CALayer* _circleLayer;
	float _radius;

}

@property (assign,nonatomic) float radius;              //@synthesize radius=_radius - In the implementation block
-(void)setColorRed:(float)arg1 green:(float)arg2 blue:(float)arg3 alpha:(float)arg4 ;
-(void)_setMapPitchRadians:(float)arg1 ;
-(float)radius;
-(void)setRadius:(float)arg1 ;
-(id)initWithAnnotation:(id)arg1 reuseIdentifier:(id)arg2 ;
@end
