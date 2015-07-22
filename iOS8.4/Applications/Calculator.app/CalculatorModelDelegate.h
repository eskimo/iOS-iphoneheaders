/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:23 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/Calculator.app/Calculator
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol CalculatorModelDelegate <NSObject>
@required
-(void)calculatorModel:(id)arg1 didUpdateDisplayValue:(id)arg2 userEntered:(char)arg3;
-(void)calculatorModel:(id)arg1 didUpdateActiveState:(char)arg2 forOperator:(unsigned)arg3;
-(void)calculatorModel:(id)arg1 didUpdateActiveState:(char)arg2 forButton:(unsigned)arg3;
-(void)calculatorModel:(id)arg1 didUpdateAlternate:(char)arg2 forButton:(unsigned)arg3;
-(void)calculatorModel:(id)arg1 didSwitchToRadians:(char)arg2;

@end
