/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:32:08 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <SpriteKit/SpriteKit-Structs.h>
#import <SpriteKit/SKAction.h>

@class SKAction;

@interface SKRepeat : SKAction {

	SKCRepeat* _mycaction;
	SKAction* _repeatedAction;

}
+(id)repeatAction:(id)arg1 count:(unsigned)arg2 ;
+(id)repeatActionForever:(id)arg1 ;
-(id)reversedAction;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(void).cxx_destruct;
@end
