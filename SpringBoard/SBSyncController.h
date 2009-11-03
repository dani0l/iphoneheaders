/**
 * This header is generated by class-dump-z 0.2-1.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import <Foundation/NSObject.h>


@interface SBSyncController : NSObject {
	int _syncState;
	int _restoreState;
	int _resetState;
	int _sofwareUpdateState;
	CFMachPortRef _backupAgentCFPort;
	BOOL _showingResetUI;
}
+(id)sharedInstance;
// inherited: -(void)dealloc;
-(void)startObserving;
-(void)stopObserving;
-(BOOL)isSyncing;
-(int)syncState;
-(void)didEndSyncing;
-(void)suspendSyncing;
-(void)resumeSyncing;
-(void)cancelSyncing;
-(void)_notifyAppsSyncWillBegin;
-(void)didShowSyncPanel;
-(void)frontLockedWhenPossible;
-(void)beginSyncing;
-(void)iTunesSyncRequestedStart;
-(void)iTunesSyncPhaseDidFinish:(int)iTunesSyncPhase reason:(int)reason;
-(BOOL)isRestoring;
-(int)restoreState;
-(void)_notifyRestoreCanProceed;
-(void)_killApplications;
-(void)beginRestoring;
-(void)finishedTerminatingApplications;
-(void)cancelRestoring;
-(void)_rebootNow;
-(void)finishEndRestoring;
-(void)didEndRestoring:(int)restoring;
-(BOOL)isResetting;
-(int)resetState;
-(void)_delayedQuitApplications;
-(void)_delayedBeginReset;
-(void)beginResetting:(BOOL)resetting;
-(void)didEndResetting;
-(void)_resetStarted:(id)started;
-(void)_resetEnded:(id)ended;
-(void)_invalidateBackupAgentCFPort;
-(void)_didEndRestoringWithRestoreFailed;
-(BOOL)_setupBackupAgentPort;
-(void)setSoftwareUpdateState:(int)state;
-(void)showPreSoftwareUpdateScreen;
-(BOOL)isSoftwareUpdating;
-(BOOL)isInUse;
@end
