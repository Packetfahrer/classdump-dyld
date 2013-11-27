/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:30:38 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol ABStyleProvider;
@class NSArray, , ABUIPerson;

@interface ABAbstractPropertyGroup : NSObject {

	NSArray* _people;
	<ABStyleProvider>* _styleProvider;
	BOOL _hasChanges;
	ABUIPerson* _preinsertedPerson;

}

@property (nonatomic,retain) NSArray * people;                               //@synthesize people=_people - In the implementation block
@property (nonatomic,retain) ABUIPerson * preinsertedPerson;                 //@synthesize preinsertedPerson=_preinsertedPerson - In the implementation block
@property (assign,nonatomic) BOOL hasChanges;                                //@synthesize hasChanges=_hasChanges - In the implementation block
@property (nonatomic,retain) <ABStyleProvider> * styleProvider;              //@synthesize styleProvider=_styleProvider - In the implementation block
-(void)reloadFromModel;
-(void)setHasChanges:(BOOL)arg1 ;
-(void)setPeople:(id)arg1 ;
-(void)updateRecord;
-(BOOL)canSave;
-(id)people;
-(id)preinsertedPerson;
-(void)setPreinsertedPerson:(id)arg1 ;
-(id)styleProvider;
-(void)setStyleProvider:(id)arg1 ;
-(int)property;
-(void)dealloc;
-(id)init;
-(BOOL)hasChanges;
@end
