/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:30:44 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <AddressBookUI/ABPropertyAction.h>

@class ABContactViewController, CNMutableContact;

@interface ABPropertyLinkedCardsAction : ABPropertyAction {

	ABContactViewController* _contactController;
	CNMutableContact* _linkedContact;

}

@property (retain) ABContactViewController * contactController;              //@synthesize contactController=_contactController - In the implementation block
@property (retain) CNMutableContact * linkedContact;                         //@synthesize linkedContact=_linkedContact - In the implementation block
-(void)performActionForItem:(id)arg1 sender:(id)arg2 ;
-(void)setContactController:(id)arg1 ;
-(id)contactController;
-(void)setPreferredPhoto;
-(void)setPreferredName;
-(void)setLinkedContact:(id)arg1 ;
-(id)linkedContact;
-(void)dealloc;
@end
