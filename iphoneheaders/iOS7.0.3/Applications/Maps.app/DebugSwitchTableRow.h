/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:38:28 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <Maps/DebugTableRow.h>

@interface DebugSwitchTableRow : DebugTableRow {

	/*^block*/ id _set;
	/*^block*/ id _get;

}

@property (nonatomic,copy) id set;              //@synthesize set=_set - In the implementation block
@property (nonatomic,copy) id get;              //@synthesize get=_get - In the implementation block
-(void)setGet:(/*^block*/ id)arg1 ;
-(void)configureCell:(id)arg1 ;
-(void)_switchDidChangeValue:(id)arg1 ;
-(void)setSet:(/*^block*/ id)arg1 ;
-(void)invalidate;
-(/*^block*/ id)set;
-(id)reuseIdentifier;
-(/*^block*/ id)get;
@end
