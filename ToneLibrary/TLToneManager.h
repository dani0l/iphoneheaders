/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
 */

@class NSDictionary, NSMutableDictionary;

@interface TLToneManager : NSObject {
    id _accessQueue;
    id _delegate;
    NSMutableDictionary *_iTunesIdentifiersByPID;
    NSMutableDictionary *_iTunesTonesByIdentifier;
    NSDictionary *_identifierAliasMap;
    NSDictionary *_previewBehaviorForDefaultIdentifier;
    NSMutableDictionary *_textTonesByIdentifier;
}

// @property(setter=_setAccessQueue:,retain) TLAccessQueue * _accessQueue;

+ (BOOL)identifierIsTextTone:(id)arg1;
+ (BOOL)migrateLegacyToneSettings;
+ (id)sharedRingtoneManager;

- (id)ITunesRingtoneInformationPlist;
- (id)_accessQueue;
- (BOOL)_addToneToManifest:(id)arg1 metadata:(id)arg2 fileName:(id)arg3 mediaDirectory:(id)arg4;
- (id)_copyITunesRingtonesFromManifestPath:(id)arg1 mediaDirectoryPath:(id)arg2;
- (id)_copySystemWideTonePreferenceKeyForAlertType:(int)arg1 accountIdentifier:(id)arg2;
- (id)_currentToneIdentifierForAlertType:(int)arg1 accountIdentifier:(id)arg2;
- (unsigned long)_currentToneSoundID:(id)arg1 defaultIdentifier:(id)arg2;
- (id)_defaultToneIdentifierForAlertType:(int)arg1;
- (id)_defaultToneNameForAlertType:(int)arg1;
- (void)_deviceRingtonesChangedNotification;
- (int)_lockManifest:(id)arg1;
- (void)_performBlockInAccessQueue:(id)arg1;
- (void)_performBlockOnMainThread:(id)arg1;
- (void)_reloadITunesRingtonesAfterExternalChange;
- (BOOL)_removeToneFromManifest:(id)arg1 fileName:(id)arg2 deletedMetadata:(id*)arg3;
- (void)_setAccessQueue:(id)arg1;
- (unsigned long)_soundIDForSystemTone:(id)arg1 isValid:(BOOL*)arg2;
- (BOOL)_toneWithIdentifierIsValid:(id)arg1;
- (id)aliasForIdentifier:(id)arg1;
- (id)allSyncedTones;
- (id)copyCurrentRingtoneIdentifier;
- (id)copyCurrentRingtoneName;
- (id)copyCurrentTextToneIdentifier;
- (id)copyCurrentTextToneName;
- (id)copyIdentifierForRingtoneAtPath:(id)arg1 isValid:(BOOL*)arg2;
- (id)copyNameOfIdentifier:(id)arg1 isValid:(BOOL*)arg2;
- (id)copyNameOfRingtoneWithIdentifier:(id)arg1 isValid:(BOOL*)arg2;
- (id)copyNameOfRingtoneWithIdentifier:(id)arg1;
- (id)copyNameOfTextToneWithIdentifier:(id)arg1 isValid:(BOOL*)arg2;
- (id)copyPathOfRingtoneWithIdentifier:(id)arg1 isValid:(BOOL*)arg2;
- (id)copyPathOfRingtoneWithIdentifier:(id)arg1;
- (unsigned long)createPreviewSoundIDForToneIdentifier:(id)arg1;
- (id)currentAirDropInvitationToneIdentifier;
- (unsigned long)currentAirDropInvitationToneSoundID;
- (id)currentCalendarAlertToneIdentifier;
- (id)currentFacebookPostToneIdentifier;
- (unsigned long)currentFacebookPostToneSoundID;
- (id)currentIdentifierForContext:(int)arg1;
- (unsigned long)currentNewCalendarAlertToneSoundID;
- (id)currentNewMailToneIdentifier;
- (id)currentNewMailToneIdentifierForAccount:(id)arg1;
- (unsigned long)currentNewMailToneSoundID;
- (unsigned long)currentNewMailToneSoundIDForAccount:(id)arg1;
- (unsigned long)currentNewReminderAlertToneSoundID;
- (id)currentNewVoicemailToneIdentifier;
- (unsigned long)currentNewVoicemailToneSoundID;
- (id)currentPhotoStreamPostToneIdentifier;
- (unsigned long)currentPhotoStreamPostToneSoundID;
- (id)currentReminderAlertToneIdentifier;
- (id)currentRingtoneIdentifier;
- (id)currentRingtoneName;
- (id)currentSentMailToneIdentifier;
- (unsigned long)currentSentMailToneSoundID;
- (id)currentSentTweetToneIdentifier;
- (unsigned long)currentSentTweetToneSoundID;
- (id)currentTextToneIdentifier;
- (unsigned long)currentTextToneSoundID;
- (id)currentToneIdentifierForAlertType:(int)arg1 accountIdentifier:(id)arg2;
- (id)currentToneIdentifierForAlertType:(int)arg1;
- (void)dealloc;
- (id)defaultAirDropInvitationToneIdentifier;
- (id)defaultAlarmToneIdentifier;
- (id)defaultCalendarAlertToneIdentifier;
- (id)defaultFacebookPostToneIdentifier;
- (id)defaultIdentifierForContext:(int)arg1;
- (id)defaultNewMailToneIdentifier;
- (id)defaultNewVoicemailToneIdentifier;
- (id)defaultPhotoStreamPostToneIdentifier;
- (id)defaultReminderAlertToneIdentifier;
- (id)defaultRingtoneIdentifier;
- (id)defaultRingtoneName;
- (id)defaultRingtonePath;
- (id)defaultSentMailToneIdentifier;
- (id)defaultSentTweetToneIdentifier;
- (id)defaultTextToneIdentifier;
- (id)defaultTextToneName;
- (void)deleteAllSyncedData;
- (BOOL)deleteSyncedToneByPID:(id)arg1;
- (id)deviceITunesRingtoneDirectory;
- (id)deviceITunesRingtoneInformationPlist;
- (unsigned int)durationOfToneWithIdentifier:(id)arg1;
- (BOOL)ensureDirectoryExists:(id)arg1;
- (id)iTunesRingtoneDirectory;
- (id)iTunesToneForPID:(id)arg1;
- (void)importTone:(id)arg1 metadata:(id)arg2 completionBlock:(id)arg3;
- (id)init;
- (id)initWithGraphicsServicesInitialization:(BOOL)arg1;
- (id)initWithITunesRingtonePlistAtPath:(id)arg1 shouldInitializeGraphicsServices:(BOOL)arg2;
- (id)initWithITunesRingtonePlistAtPath:(id)arg1;
- (BOOL)insertPurchasedToneMetadata:(id)arg1 filename:(id)arg2;
- (BOOL)insertSyncedToneMetadata:(id)arg1 filename:(id)arg2;
- (id)installedTones;
- (unsigned long long)installedTonesSize;
- (BOOL)isAlertTone:(id)arg1;
- (BOOL)isRingtonePurchased:(id)arg1;
- (BOOL)isTonePrivateWithIdentifier:(id)arg1;
- (BOOL)isToneProtectedWithIdentifier:(id)arg1;
- (void)loadITunesRingtoneInfoPlistAtPath:(id)arg1;
- (void)loadTextToneInfo;
- (id)localizedNameWithIdentifier:(id)arg1;
- (id)localizedRingtoneNameWithIdentifier:(id)arg1;
- (id)newAVItemWithRingtoneIdentifier:(id)arg1;
- (id)newMailPreferenceKeyForAccount:(id)arg1;
- (id)nullTextToneName;
- (id)pathFromIdentifier:(id)arg1 withPrefix:(id)arg2;
- (unsigned long)previewBehaviorForDefaultIdentifier:(id)arg1;
- (unsigned long)previewSoundIDForTextToneIdentifier:(id)arg1;
- (void)removeImportedToneWithIdentifier:(id)arg1;
- (void)removeNewMailToneForAccount:(id)arg1;
- (id)rootDirectory;
- (void)setCurrentRingtoneIdentifier:(id)arg1;
- (void)setCurrentTextToneIdentifier:(id)arg1;
- (void)setCurrentToneIdentifier:(id)arg1 forAlertType:(int)arg2 accountIdentifier:(id)arg3;
- (void)setCurrentToneIdentifier:(id)arg1 forAlertType:(int)arg2;
- (void)setDelegate:(id)arg1;
- (BOOL)shouldShowAlarmSounds;
- (BOOL)shouldShowRingtones;
- (unsigned long)soundIDForTextToneIdentifier:(id)arg1 isValid:(BOOL*)arg2;
- (unsigned long)soundIDForTextToneIdentifier:(id)arg1;
- (unsigned long)soundIDForToneIdentifier:(id)arg1 isValid:(BOOL*)arg2;
- (unsigned long)soundIDForToneIdentifier:(id)arg1;
- (id)systemModernSoundDirectory;
- (id)systemNewSoundDirectory;
- (id)systemRingtoneDirectory;
- (id)systemSoundDirectory;
- (BOOL)toneWithIdentifierIsNone:(id)arg1;
- (BOOL)toneWithIdentifierIsValid:(id)arg1;
- (BOOL)transferPurchasedToITunes:(id)arg1;

@end