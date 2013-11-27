/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:33:39 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <DataAccess/DataAccess-Structs.h>
@class NoteContext;

@interface DALocalDBHelper : NSObject {

	void* _abDB;
	int _abConnectionCount;
	CalDatabaseRef _calDB;
	int _calConnectionCount;
	void* _bookmarkDB;
	int _bookmarkConnectionCount;
	NoteContext* _noteDB;
	int _noteConnectionCount;
	/*^block*/ id _calUnitTestCallbackBlock;

}
+(void)abSetTestABDBDir:(id)arg1 ;
+(id)abTestABDBDir;
+(void)calSetTestCalDBDir:(id)arg1 ;
+(id)calTestCalDBDir;
+(id)sharedInstanceForAccountType:(id)arg1 creatingClass:(Class)arg2 ;
-(void)_registerForAddressBookYieldNotifications;
-(void)_registerForCalendarYieldNotifications;
-(BOOL)noteSaveDB;
-(void)abProcessAddedRecords;
-(void)abProcessAddedImages;
-(id)abConstraintPlistPath;
-(void)calOpenDBWithChangeLogging;
-(void*)bookmarkDB;
-(BOOL)bookmarkOpenDB;
-(void)bookmarkSaveDB;
-(void)bookmarkCloseDBAndSave:(BOOL)arg1 ;
-(void)noteOpenDB;
-(BOOL)noteCloseDBAndSave:(BOOL)arg1 ;
-(int)noteConnectionCount;
-(void)calUnitTestsSetCallbackBlockForSave:(/*^block*/ id)arg1 ;
-(int)calConnectionCount;
-(BOOL)calSaveDBAndFlushCaches;
-(void)abOpenDB;
-(BOOL)abCloseDBAndSave:(BOOL)arg1 ;
-(CalDatabaseRef)calDB;
-(void)calOpenDB;
-(BOOL)calCloseDBAndSave:(BOOL)arg1 ;
-(void*)abDB;
-(BOOL)abSaveDB;
-(BOOL)calSaveDB;
-(id)noteDB;
@end
