/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:38:45 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <MobileMail/MFSearchAlternative.h>

@class NSString, NSSet;

@interface MFSearchAlternativePerson : MFSearchAlternative {

	NSString* _displayName;
	NSSet* _addresses;

}
+(id)alternativeWithDisplayName:(id)arg1 addresses:(id)arg2 ;
-(id)initWithDisplayName:(id)arg1 addresses:(id)arg2 ;
-(int)_criterionType;
-(void)dealloc;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)criterion;
@end
