/*
 *
 *    Copyright (c) 2022 Project CHIP Authors
 *
 *    Licensed under the Apache License, Version 2.0 (the "License");
 *    you may not use this file except in compliance with the License.
 *    You may obtain a copy of the License at
 *
 *        http://www.apache.org/licenses/LICENSE-2.0
 *
 *    Unless required by applicable law or agreed to in writing, software
 *    distributed under the License is distributed on an "AS IS" BASIS,
 *    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *    See the License for the specific language governing permissions and
 *    limitations under the License.
 */

// THIS FILE IS GENERATED BY ZAP

#pragma once

#include <app/util/basic-types.h>

namespace chip {
namespace app {
namespace Clusters {

// Matter does not have global commands

namespace Identify {
namespace Commands {

namespace Identify {
static constexpr CommandId Id = 0x00000000;
} // namespace Identify

namespace TriggerEffect {
static constexpr CommandId Id = 0x00000040;
} // namespace TriggerEffect

} // namespace Commands
} // namespace Identify

namespace Groups {
namespace Commands {

namespace AddGroup {
static constexpr CommandId Id = 0x00000000;
} // namespace AddGroup

namespace AddGroupResponse {
static constexpr CommandId Id = 0x00000000;
} // namespace AddGroupResponse

namespace ViewGroup {
static constexpr CommandId Id = 0x00000001;
} // namespace ViewGroup

namespace ViewGroupResponse {
static constexpr CommandId Id = 0x00000001;
} // namespace ViewGroupResponse

namespace GetGroupMembership {
static constexpr CommandId Id = 0x00000002;
} // namespace GetGroupMembership

namespace GetGroupMembershipResponse {
static constexpr CommandId Id = 0x00000002;
} // namespace GetGroupMembershipResponse

namespace RemoveGroup {
static constexpr CommandId Id = 0x00000003;
} // namespace RemoveGroup

namespace RemoveGroupResponse {
static constexpr CommandId Id = 0x00000003;
} // namespace RemoveGroupResponse

namespace RemoveAllGroups {
static constexpr CommandId Id = 0x00000004;
} // namespace RemoveAllGroups

namespace AddGroupIfIdentifying {
static constexpr CommandId Id = 0x00000005;
} // namespace AddGroupIfIdentifying

} // namespace Commands
} // namespace Groups

namespace Scenes {
namespace Commands {

namespace AddScene {
static constexpr CommandId Id = 0x00000000;
} // namespace AddScene

namespace AddSceneResponse {
static constexpr CommandId Id = 0x00000000;
} // namespace AddSceneResponse

namespace ViewScene {
static constexpr CommandId Id = 0x00000001;
} // namespace ViewScene

namespace ViewSceneResponse {
static constexpr CommandId Id = 0x00000001;
} // namespace ViewSceneResponse

namespace RemoveScene {
static constexpr CommandId Id = 0x00000002;
} // namespace RemoveScene

namespace RemoveSceneResponse {
static constexpr CommandId Id = 0x00000002;
} // namespace RemoveSceneResponse

namespace RemoveAllScenes {
static constexpr CommandId Id = 0x00000003;
} // namespace RemoveAllScenes

namespace RemoveAllScenesResponse {
static constexpr CommandId Id = 0x00000003;
} // namespace RemoveAllScenesResponse

namespace StoreScene {
static constexpr CommandId Id = 0x00000004;
} // namespace StoreScene

namespace StoreSceneResponse {
static constexpr CommandId Id = 0x00000004;
} // namespace StoreSceneResponse

namespace RecallScene {
static constexpr CommandId Id = 0x00000005;
} // namespace RecallScene

namespace GetSceneMembership {
static constexpr CommandId Id = 0x00000006;
} // namespace GetSceneMembership

namespace GetSceneMembershipResponse {
static constexpr CommandId Id = 0x00000006;
} // namespace GetSceneMembershipResponse

namespace EnhancedAddScene {
static constexpr CommandId Id = 0x00000040;
} // namespace EnhancedAddScene

namespace EnhancedAddSceneResponse {
static constexpr CommandId Id = 0x00000040;
} // namespace EnhancedAddSceneResponse

namespace EnhancedViewScene {
static constexpr CommandId Id = 0x00000041;
} // namespace EnhancedViewScene

namespace EnhancedViewSceneResponse {
static constexpr CommandId Id = 0x00000041;
} // namespace EnhancedViewSceneResponse

namespace CopyScene {
static constexpr CommandId Id = 0x00000042;
} // namespace CopyScene

namespace CopySceneResponse {
static constexpr CommandId Id = 0x00000042;
} // namespace CopySceneResponse

} // namespace Commands
} // namespace Scenes

namespace OnOff {
namespace Commands {

namespace Off {
static constexpr CommandId Id = 0x00000000;
} // namespace Off

namespace On {
static constexpr CommandId Id = 0x00000001;
} // namespace On

namespace Toggle {
static constexpr CommandId Id = 0x00000002;
} // namespace Toggle

namespace OffWithEffect {
static constexpr CommandId Id = 0x00000040;
} // namespace OffWithEffect

namespace OnWithRecallGlobalScene {
static constexpr CommandId Id = 0x00000041;
} // namespace OnWithRecallGlobalScene

namespace OnWithTimedOff {
static constexpr CommandId Id = 0x00000042;
} // namespace OnWithTimedOff

} // namespace Commands
} // namespace OnOff

namespace LevelControl {
namespace Commands {

namespace MoveToLevel {
static constexpr CommandId Id = 0x00000000;
} // namespace MoveToLevel

namespace Move {
static constexpr CommandId Id = 0x00000001;
} // namespace Move

namespace Step {
static constexpr CommandId Id = 0x00000002;
} // namespace Step

namespace Stop {
static constexpr CommandId Id = 0x00000003;
} // namespace Stop

namespace MoveToLevelWithOnOff {
static constexpr CommandId Id = 0x00000004;
} // namespace MoveToLevelWithOnOff

namespace MoveWithOnOff {
static constexpr CommandId Id = 0x00000005;
} // namespace MoveWithOnOff

namespace StepWithOnOff {
static constexpr CommandId Id = 0x00000006;
} // namespace StepWithOnOff

namespace StopWithOnOff {
static constexpr CommandId Id = 0x00000007;
} // namespace StopWithOnOff

namespace MoveToClosestFrequency {
static constexpr CommandId Id = 0x00000008;
} // namespace MoveToClosestFrequency

} // namespace Commands
} // namespace LevelControl

namespace Actions {
namespace Commands {

namespace InstantAction {
static constexpr CommandId Id = 0x00000000;
} // namespace InstantAction

namespace InstantActionWithTransition {
static constexpr CommandId Id = 0x00000001;
} // namespace InstantActionWithTransition

namespace StartAction {
static constexpr CommandId Id = 0x00000002;
} // namespace StartAction

namespace StartActionWithDuration {
static constexpr CommandId Id = 0x00000003;
} // namespace StartActionWithDuration

namespace StopAction {
static constexpr CommandId Id = 0x00000004;
} // namespace StopAction

namespace PauseAction {
static constexpr CommandId Id = 0x00000005;
} // namespace PauseAction

namespace PauseActionWithDuration {
static constexpr CommandId Id = 0x00000006;
} // namespace PauseActionWithDuration

namespace ResumeAction {
static constexpr CommandId Id = 0x00000007;
} // namespace ResumeAction

namespace EnableAction {
static constexpr CommandId Id = 0x00000008;
} // namespace EnableAction

namespace EnableActionWithDuration {
static constexpr CommandId Id = 0x00000009;
} // namespace EnableActionWithDuration

namespace DisableAction {
static constexpr CommandId Id = 0x0000000A;
} // namespace DisableAction

namespace DisableActionWithDuration {
static constexpr CommandId Id = 0x0000000B;
} // namespace DisableActionWithDuration

} // namespace Commands
} // namespace Actions

namespace BasicInformation {
namespace Commands {

namespace MfgSpecificPing {
static constexpr CommandId Id = 0x10020000;
} // namespace MfgSpecificPing

} // namespace Commands
} // namespace BasicInformation

namespace OtaSoftwareUpdateProvider {
namespace Commands {

namespace QueryImage {
static constexpr CommandId Id = 0x00000000;
} // namespace QueryImage

namespace QueryImageResponse {
static constexpr CommandId Id = 0x00000001;
} // namespace QueryImageResponse

namespace ApplyUpdateRequest {
static constexpr CommandId Id = 0x00000002;
} // namespace ApplyUpdateRequest

namespace ApplyUpdateResponse {
static constexpr CommandId Id = 0x00000003;
} // namespace ApplyUpdateResponse

namespace NotifyUpdateApplied {
static constexpr CommandId Id = 0x00000004;
} // namespace NotifyUpdateApplied

} // namespace Commands
} // namespace OtaSoftwareUpdateProvider

namespace OtaSoftwareUpdateRequestor {
namespace Commands {

namespace AnnounceOTAProvider {
static constexpr CommandId Id = 0x00000000;
} // namespace AnnounceOTAProvider

} // namespace Commands
} // namespace OtaSoftwareUpdateRequestor

namespace GeneralCommissioning {
namespace Commands {

namespace ArmFailSafe {
static constexpr CommandId Id = 0x00000000;
} // namespace ArmFailSafe

namespace ArmFailSafeResponse {
static constexpr CommandId Id = 0x00000001;
} // namespace ArmFailSafeResponse

namespace SetRegulatoryConfig {
static constexpr CommandId Id = 0x00000002;
} // namespace SetRegulatoryConfig

namespace SetRegulatoryConfigResponse {
static constexpr CommandId Id = 0x00000003;
} // namespace SetRegulatoryConfigResponse

namespace CommissioningComplete {
static constexpr CommandId Id = 0x00000004;
} // namespace CommissioningComplete

namespace CommissioningCompleteResponse {
static constexpr CommandId Id = 0x00000005;
} // namespace CommissioningCompleteResponse

} // namespace Commands
} // namespace GeneralCommissioning

namespace NetworkCommissioning {
namespace Commands {

namespace ScanNetworks {
static constexpr CommandId Id = 0x00000000;
} // namespace ScanNetworks

namespace ScanNetworksResponse {
static constexpr CommandId Id = 0x00000001;
} // namespace ScanNetworksResponse

namespace AddOrUpdateWiFiNetwork {
static constexpr CommandId Id = 0x00000002;
} // namespace AddOrUpdateWiFiNetwork

namespace AddOrUpdateThreadNetwork {
static constexpr CommandId Id = 0x00000003;
} // namespace AddOrUpdateThreadNetwork

namespace RemoveNetwork {
static constexpr CommandId Id = 0x00000004;
} // namespace RemoveNetwork

namespace NetworkConfigResponse {
static constexpr CommandId Id = 0x00000005;
} // namespace NetworkConfigResponse

namespace ConnectNetwork {
static constexpr CommandId Id = 0x00000006;
} // namespace ConnectNetwork

namespace ConnectNetworkResponse {
static constexpr CommandId Id = 0x00000007;
} // namespace ConnectNetworkResponse

namespace ReorderNetwork {
static constexpr CommandId Id = 0x00000008;
} // namespace ReorderNetwork

} // namespace Commands
} // namespace NetworkCommissioning

namespace DiagnosticLogs {
namespace Commands {

namespace RetrieveLogsRequest {
static constexpr CommandId Id = 0x00000000;
} // namespace RetrieveLogsRequest

namespace RetrieveLogsResponse {
static constexpr CommandId Id = 0x00000001;
} // namespace RetrieveLogsResponse

} // namespace Commands
} // namespace DiagnosticLogs

namespace GeneralDiagnostics {
namespace Commands {

namespace TestEventTrigger {
static constexpr CommandId Id = 0x00000000;
} // namespace TestEventTrigger

} // namespace Commands
} // namespace GeneralDiagnostics

namespace SoftwareDiagnostics {
namespace Commands {

namespace ResetWatermarks {
static constexpr CommandId Id = 0x00000000;
} // namespace ResetWatermarks

} // namespace Commands
} // namespace SoftwareDiagnostics

namespace ThreadNetworkDiagnostics {
namespace Commands {

namespace ResetCounts {
static constexpr CommandId Id = 0x00000000;
} // namespace ResetCounts

} // namespace Commands
} // namespace ThreadNetworkDiagnostics

namespace WiFiNetworkDiagnostics {
namespace Commands {

namespace ResetCounts {
static constexpr CommandId Id = 0x00000000;
} // namespace ResetCounts

} // namespace Commands
} // namespace WiFiNetworkDiagnostics

namespace EthernetNetworkDiagnostics {
namespace Commands {

namespace ResetCounts {
static constexpr CommandId Id = 0x00000000;
} // namespace ResetCounts

} // namespace Commands
} // namespace EthernetNetworkDiagnostics

namespace TimeSynchronization {
namespace Commands {

namespace SetUTCTime {
static constexpr CommandId Id = 0x00000000;
} // namespace SetUTCTime

namespace SetTrustedTimeSource {
static constexpr CommandId Id = 0x00000001;
} // namespace SetTrustedTimeSource

namespace SetTimeZone {
static constexpr CommandId Id = 0x00000002;
} // namespace SetTimeZone

namespace SetTimeZoneResponse {
static constexpr CommandId Id = 0x00000003;
} // namespace SetTimeZoneResponse

namespace SetDSTOffset {
static constexpr CommandId Id = 0x00000004;
} // namespace SetDSTOffset

namespace SetDefaultNTP {
static constexpr CommandId Id = 0x00000005;
} // namespace SetDefaultNTP

} // namespace Commands
} // namespace TimeSynchronization

namespace AdministratorCommissioning {
namespace Commands {

namespace OpenCommissioningWindow {
static constexpr CommandId Id = 0x00000000;
} // namespace OpenCommissioningWindow

namespace OpenBasicCommissioningWindow {
static constexpr CommandId Id = 0x00000001;
} // namespace OpenBasicCommissioningWindow

namespace RevokeCommissioning {
static constexpr CommandId Id = 0x00000002;
} // namespace RevokeCommissioning

} // namespace Commands
} // namespace AdministratorCommissioning

namespace OperationalCredentials {
namespace Commands {

namespace AttestationRequest {
static constexpr CommandId Id = 0x00000000;
} // namespace AttestationRequest

namespace AttestationResponse {
static constexpr CommandId Id = 0x00000001;
} // namespace AttestationResponse

namespace CertificateChainRequest {
static constexpr CommandId Id = 0x00000002;
} // namespace CertificateChainRequest

namespace CertificateChainResponse {
static constexpr CommandId Id = 0x00000003;
} // namespace CertificateChainResponse

namespace CSRRequest {
static constexpr CommandId Id = 0x00000004;
} // namespace CSRRequest

namespace CSRResponse {
static constexpr CommandId Id = 0x00000005;
} // namespace CSRResponse

namespace AddNOC {
static constexpr CommandId Id = 0x00000006;
} // namespace AddNOC

namespace UpdateNOC {
static constexpr CommandId Id = 0x00000007;
} // namespace UpdateNOC

namespace NOCResponse {
static constexpr CommandId Id = 0x00000008;
} // namespace NOCResponse

namespace UpdateFabricLabel {
static constexpr CommandId Id = 0x00000009;
} // namespace UpdateFabricLabel

namespace RemoveFabric {
static constexpr CommandId Id = 0x0000000A;
} // namespace RemoveFabric

namespace AddTrustedRootCertificate {
static constexpr CommandId Id = 0x0000000B;
} // namespace AddTrustedRootCertificate

} // namespace Commands
} // namespace OperationalCredentials

namespace GroupKeyManagement {
namespace Commands {

namespace KeySetWrite {
static constexpr CommandId Id = 0x00000000;
} // namespace KeySetWrite

namespace KeySetRead {
static constexpr CommandId Id = 0x00000001;
} // namespace KeySetRead

namespace KeySetReadResponse {
static constexpr CommandId Id = 0x00000002;
} // namespace KeySetReadResponse

namespace KeySetRemove {
static constexpr CommandId Id = 0x00000003;
} // namespace KeySetRemove

namespace KeySetReadAllIndices {
static constexpr CommandId Id = 0x00000004;
} // namespace KeySetReadAllIndices

namespace KeySetReadAllIndicesResponse {
static constexpr CommandId Id = 0x00000005;
} // namespace KeySetReadAllIndicesResponse

} // namespace Commands
} // namespace GroupKeyManagement

namespace ModeSelect {
namespace Commands {

namespace ChangeToMode {
static constexpr CommandId Id = 0x00000000;
} // namespace ChangeToMode

} // namespace Commands
} // namespace ModeSelect

namespace DoorLock {
namespace Commands {

namespace LockDoor {
static constexpr CommandId Id = 0x00000000;
} // namespace LockDoor

namespace UnlockDoor {
static constexpr CommandId Id = 0x00000001;
} // namespace UnlockDoor

namespace UnlockWithTimeout {
static constexpr CommandId Id = 0x00000003;
} // namespace UnlockWithTimeout

namespace SetWeekDaySchedule {
static constexpr CommandId Id = 0x0000000B;
} // namespace SetWeekDaySchedule

namespace GetWeekDaySchedule {
static constexpr CommandId Id = 0x0000000C;
} // namespace GetWeekDaySchedule

namespace GetWeekDayScheduleResponse {
static constexpr CommandId Id = 0x0000000C;
} // namespace GetWeekDayScheduleResponse

namespace ClearWeekDaySchedule {
static constexpr CommandId Id = 0x0000000D;
} // namespace ClearWeekDaySchedule

namespace SetYearDaySchedule {
static constexpr CommandId Id = 0x0000000E;
} // namespace SetYearDaySchedule

namespace GetYearDaySchedule {
static constexpr CommandId Id = 0x0000000F;
} // namespace GetYearDaySchedule

namespace GetYearDayScheduleResponse {
static constexpr CommandId Id = 0x0000000F;
} // namespace GetYearDayScheduleResponse

namespace ClearYearDaySchedule {
static constexpr CommandId Id = 0x00000010;
} // namespace ClearYearDaySchedule

namespace SetHolidaySchedule {
static constexpr CommandId Id = 0x00000011;
} // namespace SetHolidaySchedule

namespace GetHolidaySchedule {
static constexpr CommandId Id = 0x00000012;
} // namespace GetHolidaySchedule

namespace GetHolidayScheduleResponse {
static constexpr CommandId Id = 0x00000012;
} // namespace GetHolidayScheduleResponse

namespace ClearHolidaySchedule {
static constexpr CommandId Id = 0x00000013;
} // namespace ClearHolidaySchedule

namespace SetUser {
static constexpr CommandId Id = 0x0000001A;
} // namespace SetUser

namespace GetUser {
static constexpr CommandId Id = 0x0000001B;
} // namespace GetUser

namespace GetUserResponse {
static constexpr CommandId Id = 0x0000001C;
} // namespace GetUserResponse

namespace ClearUser {
static constexpr CommandId Id = 0x0000001D;
} // namespace ClearUser

namespace SetCredential {
static constexpr CommandId Id = 0x00000022;
} // namespace SetCredential

namespace SetCredentialResponse {
static constexpr CommandId Id = 0x00000023;
} // namespace SetCredentialResponse

namespace GetCredentialStatus {
static constexpr CommandId Id = 0x00000024;
} // namespace GetCredentialStatus

namespace GetCredentialStatusResponse {
static constexpr CommandId Id = 0x00000025;
} // namespace GetCredentialStatusResponse

namespace ClearCredential {
static constexpr CommandId Id = 0x00000026;
} // namespace ClearCredential

} // namespace Commands
} // namespace DoorLock

namespace WindowCovering {
namespace Commands {

namespace UpOrOpen {
static constexpr CommandId Id = 0x00000000;
} // namespace UpOrOpen

namespace DownOrClose {
static constexpr CommandId Id = 0x00000001;
} // namespace DownOrClose

namespace StopMotion {
static constexpr CommandId Id = 0x00000002;
} // namespace StopMotion

namespace GoToLiftValue {
static constexpr CommandId Id = 0x00000004;
} // namespace GoToLiftValue

namespace GoToLiftPercentage {
static constexpr CommandId Id = 0x00000005;
} // namespace GoToLiftPercentage

namespace GoToTiltValue {
static constexpr CommandId Id = 0x00000007;
} // namespace GoToTiltValue

namespace GoToTiltPercentage {
static constexpr CommandId Id = 0x00000008;
} // namespace GoToTiltPercentage

} // namespace Commands
} // namespace WindowCovering

namespace BarrierControl {
namespace Commands {

namespace BarrierControlGoToPercent {
static constexpr CommandId Id = 0x00000000;
} // namespace BarrierControlGoToPercent

namespace BarrierControlStop {
static constexpr CommandId Id = 0x00000001;
} // namespace BarrierControlStop

} // namespace Commands
} // namespace BarrierControl

namespace Thermostat {
namespace Commands {

namespace SetpointRaiseLower {
static constexpr CommandId Id = 0x00000000;
} // namespace SetpointRaiseLower

namespace GetWeeklyScheduleResponse {
static constexpr CommandId Id = 0x00000000;
} // namespace GetWeeklyScheduleResponse

namespace SetWeeklySchedule {
static constexpr CommandId Id = 0x00000001;
} // namespace SetWeeklySchedule

namespace GetWeeklySchedule {
static constexpr CommandId Id = 0x00000002;
} // namespace GetWeeklySchedule

namespace ClearWeeklySchedule {
static constexpr CommandId Id = 0x00000003;
} // namespace ClearWeeklySchedule

} // namespace Commands
} // namespace Thermostat

namespace ColorControl {
namespace Commands {

namespace MoveToHue {
static constexpr CommandId Id = 0x00000000;
} // namespace MoveToHue

namespace MoveHue {
static constexpr CommandId Id = 0x00000001;
} // namespace MoveHue

namespace StepHue {
static constexpr CommandId Id = 0x00000002;
} // namespace StepHue

namespace MoveToSaturation {
static constexpr CommandId Id = 0x00000003;
} // namespace MoveToSaturation

namespace MoveSaturation {
static constexpr CommandId Id = 0x00000004;
} // namespace MoveSaturation

namespace StepSaturation {
static constexpr CommandId Id = 0x00000005;
} // namespace StepSaturation

namespace MoveToHueAndSaturation {
static constexpr CommandId Id = 0x00000006;
} // namespace MoveToHueAndSaturation

namespace MoveToColor {
static constexpr CommandId Id = 0x00000007;
} // namespace MoveToColor

namespace MoveColor {
static constexpr CommandId Id = 0x00000008;
} // namespace MoveColor

namespace StepColor {
static constexpr CommandId Id = 0x00000009;
} // namespace StepColor

namespace MoveToColorTemperature {
static constexpr CommandId Id = 0x0000000A;
} // namespace MoveToColorTemperature

namespace EnhancedMoveToHue {
static constexpr CommandId Id = 0x00000040;
} // namespace EnhancedMoveToHue

namespace EnhancedMoveHue {
static constexpr CommandId Id = 0x00000041;
} // namespace EnhancedMoveHue

namespace EnhancedStepHue {
static constexpr CommandId Id = 0x00000042;
} // namespace EnhancedStepHue

namespace EnhancedMoveToHueAndSaturation {
static constexpr CommandId Id = 0x00000043;
} // namespace EnhancedMoveToHueAndSaturation

namespace ColorLoopSet {
static constexpr CommandId Id = 0x00000044;
} // namespace ColorLoopSet

namespace StopMoveStep {
static constexpr CommandId Id = 0x00000047;
} // namespace StopMoveStep

namespace MoveColorTemperature {
static constexpr CommandId Id = 0x0000004B;
} // namespace MoveColorTemperature

namespace StepColorTemperature {
static constexpr CommandId Id = 0x0000004C;
} // namespace StepColorTemperature

} // namespace Commands
} // namespace ColorControl

namespace Channel {
namespace Commands {

namespace ChangeChannel {
static constexpr CommandId Id = 0x00000000;
} // namespace ChangeChannel

namespace ChangeChannelResponse {
static constexpr CommandId Id = 0x00000001;
} // namespace ChangeChannelResponse

namespace ChangeChannelByNumber {
static constexpr CommandId Id = 0x00000002;
} // namespace ChangeChannelByNumber

namespace SkipChannel {
static constexpr CommandId Id = 0x00000003;
} // namespace SkipChannel

} // namespace Commands
} // namespace Channel

namespace TargetNavigator {
namespace Commands {

namespace NavigateTarget {
static constexpr CommandId Id = 0x00000000;
} // namespace NavigateTarget

namespace NavigateTargetResponse {
static constexpr CommandId Id = 0x00000001;
} // namespace NavigateTargetResponse

} // namespace Commands
} // namespace TargetNavigator

namespace MediaPlayback {
namespace Commands {

namespace Play {
static constexpr CommandId Id = 0x00000000;
} // namespace Play

namespace Pause {
static constexpr CommandId Id = 0x00000001;
} // namespace Pause

namespace Stop {
static constexpr CommandId Id = 0x00000002;
} // namespace Stop

namespace StartOver {
static constexpr CommandId Id = 0x00000003;
} // namespace StartOver

namespace Previous {
static constexpr CommandId Id = 0x00000004;
} // namespace Previous

namespace Next {
static constexpr CommandId Id = 0x00000005;
} // namespace Next

namespace Rewind {
static constexpr CommandId Id = 0x00000006;
} // namespace Rewind

namespace FastForward {
static constexpr CommandId Id = 0x00000007;
} // namespace FastForward

namespace SkipForward {
static constexpr CommandId Id = 0x00000008;
} // namespace SkipForward

namespace SkipBackward {
static constexpr CommandId Id = 0x00000009;
} // namespace SkipBackward

namespace PlaybackResponse {
static constexpr CommandId Id = 0x0000000A;
} // namespace PlaybackResponse

namespace Seek {
static constexpr CommandId Id = 0x0000000B;
} // namespace Seek

} // namespace Commands
} // namespace MediaPlayback

namespace MediaInput {
namespace Commands {

namespace SelectInput {
static constexpr CommandId Id = 0x00000000;
} // namespace SelectInput

namespace ShowInputStatus {
static constexpr CommandId Id = 0x00000001;
} // namespace ShowInputStatus

namespace HideInputStatus {
static constexpr CommandId Id = 0x00000002;
} // namespace HideInputStatus

namespace RenameInput {
static constexpr CommandId Id = 0x00000003;
} // namespace RenameInput

} // namespace Commands
} // namespace MediaInput

namespace LowPower {
namespace Commands {

namespace Sleep {
static constexpr CommandId Id = 0x00000000;
} // namespace Sleep

} // namespace Commands
} // namespace LowPower

namespace KeypadInput {
namespace Commands {

namespace SendKey {
static constexpr CommandId Id = 0x00000000;
} // namespace SendKey

namespace SendKeyResponse {
static constexpr CommandId Id = 0x00000001;
} // namespace SendKeyResponse

} // namespace Commands
} // namespace KeypadInput

namespace ContentLauncher {
namespace Commands {

namespace LaunchContent {
static constexpr CommandId Id = 0x00000000;
} // namespace LaunchContent

namespace LaunchURL {
static constexpr CommandId Id = 0x00000001;
} // namespace LaunchURL

namespace LauncherResponse {
static constexpr CommandId Id = 0x00000002;
} // namespace LauncherResponse

} // namespace Commands
} // namespace ContentLauncher

namespace AudioOutput {
namespace Commands {

namespace SelectOutput {
static constexpr CommandId Id = 0x00000000;
} // namespace SelectOutput

namespace RenameOutput {
static constexpr CommandId Id = 0x00000001;
} // namespace RenameOutput

} // namespace Commands
} // namespace AudioOutput

namespace ApplicationLauncher {
namespace Commands {

namespace LaunchApp {
static constexpr CommandId Id = 0x00000000;
} // namespace LaunchApp

namespace StopApp {
static constexpr CommandId Id = 0x00000001;
} // namespace StopApp

namespace HideApp {
static constexpr CommandId Id = 0x00000002;
} // namespace HideApp

namespace LauncherResponse {
static constexpr CommandId Id = 0x00000003;
} // namespace LauncherResponse

} // namespace Commands
} // namespace ApplicationLauncher

namespace AccountLogin {
namespace Commands {

namespace GetSetupPIN {
static constexpr CommandId Id = 0x00000000;
} // namespace GetSetupPIN

namespace GetSetupPINResponse {
static constexpr CommandId Id = 0x00000001;
} // namespace GetSetupPINResponse

namespace Login {
static constexpr CommandId Id = 0x00000002;
} // namespace Login

namespace Logout {
static constexpr CommandId Id = 0x00000003;
} // namespace Logout

} // namespace Commands
} // namespace AccountLogin

namespace ElectricalMeasurement {
namespace Commands {

namespace GetProfileInfoResponseCommand {
static constexpr CommandId Id = 0x00000000;
} // namespace GetProfileInfoResponseCommand

namespace GetProfileInfoCommand {
static constexpr CommandId Id = 0x00000000;
} // namespace GetProfileInfoCommand

namespace GetMeasurementProfileResponseCommand {
static constexpr CommandId Id = 0x00000001;
} // namespace GetMeasurementProfileResponseCommand

namespace GetMeasurementProfileCommand {
static constexpr CommandId Id = 0x00000001;
} // namespace GetMeasurementProfileCommand

} // namespace Commands
} // namespace ElectricalMeasurement

namespace ClientMonitoring {
namespace Commands {

namespace RegisterClientMonitoring {
static constexpr CommandId Id = 0x00000000;
} // namespace RegisterClientMonitoring

namespace RegisterClientMonitoringResponse {
static constexpr CommandId Id = 0x00000001;
} // namespace RegisterClientMonitoringResponse

namespace UnregisterClientMonitoring {
static constexpr CommandId Id = 0x00000002;
} // namespace UnregisterClientMonitoring

namespace StayAwakeRequest {
static constexpr CommandId Id = 0x00000003;
} // namespace StayAwakeRequest

} // namespace Commands
} // namespace ClientMonitoring

namespace UnitTesting {
namespace Commands {

namespace Test {
static constexpr CommandId Id = 0x00000000;
} // namespace Test

namespace TestSpecificResponse {
static constexpr CommandId Id = 0x00000000;
} // namespace TestSpecificResponse

namespace TestNotHandled {
static constexpr CommandId Id = 0x00000001;
} // namespace TestNotHandled

namespace TestAddArgumentsResponse {
static constexpr CommandId Id = 0x00000001;
} // namespace TestAddArgumentsResponse

namespace TestSpecific {
static constexpr CommandId Id = 0x00000002;
} // namespace TestSpecific

namespace TestSimpleArgumentResponse {
static constexpr CommandId Id = 0x00000002;
} // namespace TestSimpleArgumentResponse

namespace TestUnknownCommand {
static constexpr CommandId Id = 0x00000003;
} // namespace TestUnknownCommand

namespace TestStructArrayArgumentResponse {
static constexpr CommandId Id = 0x00000003;
} // namespace TestStructArrayArgumentResponse

namespace TestAddArguments {
static constexpr CommandId Id = 0x00000004;
} // namespace TestAddArguments

namespace TestListInt8UReverseResponse {
static constexpr CommandId Id = 0x00000004;
} // namespace TestListInt8UReverseResponse

namespace TestSimpleArgumentRequest {
static constexpr CommandId Id = 0x00000005;
} // namespace TestSimpleArgumentRequest

namespace TestEnumsResponse {
static constexpr CommandId Id = 0x00000005;
} // namespace TestEnumsResponse

namespace TestStructArrayArgumentRequest {
static constexpr CommandId Id = 0x00000006;
} // namespace TestStructArrayArgumentRequest

namespace TestNullableOptionalResponse {
static constexpr CommandId Id = 0x00000006;
} // namespace TestNullableOptionalResponse

namespace TestStructArgumentRequest {
static constexpr CommandId Id = 0x00000007;
} // namespace TestStructArgumentRequest

namespace TestComplexNullableOptionalResponse {
static constexpr CommandId Id = 0x00000007;
} // namespace TestComplexNullableOptionalResponse

namespace TestNestedStructArgumentRequest {
static constexpr CommandId Id = 0x00000008;
} // namespace TestNestedStructArgumentRequest

namespace BooleanResponse {
static constexpr CommandId Id = 0x00000008;
} // namespace BooleanResponse

namespace TestListStructArgumentRequest {
static constexpr CommandId Id = 0x00000009;
} // namespace TestListStructArgumentRequest

namespace SimpleStructResponse {
static constexpr CommandId Id = 0x00000009;
} // namespace SimpleStructResponse

namespace TestListInt8UArgumentRequest {
static constexpr CommandId Id = 0x0000000A;
} // namespace TestListInt8UArgumentRequest

namespace TestEmitTestEventResponse {
static constexpr CommandId Id = 0x0000000A;
} // namespace TestEmitTestEventResponse

namespace TestNestedStructListArgumentRequest {
static constexpr CommandId Id = 0x0000000B;
} // namespace TestNestedStructListArgumentRequest

namespace TestEmitTestFabricScopedEventResponse {
static constexpr CommandId Id = 0x0000000B;
} // namespace TestEmitTestFabricScopedEventResponse

namespace TestListNestedStructListArgumentRequest {
static constexpr CommandId Id = 0x0000000C;
} // namespace TestListNestedStructListArgumentRequest

namespace TestListInt8UReverseRequest {
static constexpr CommandId Id = 0x0000000D;
} // namespace TestListInt8UReverseRequest

namespace TestEnumsRequest {
static constexpr CommandId Id = 0x0000000E;
} // namespace TestEnumsRequest

namespace TestNullableOptionalRequest {
static constexpr CommandId Id = 0x0000000F;
} // namespace TestNullableOptionalRequest

namespace TestComplexNullableOptionalRequest {
static constexpr CommandId Id = 0x00000010;
} // namespace TestComplexNullableOptionalRequest

namespace SimpleStructEchoRequest {
static constexpr CommandId Id = 0x00000011;
} // namespace SimpleStructEchoRequest

namespace TimedInvokeRequest {
static constexpr CommandId Id = 0x00000012;
} // namespace TimedInvokeRequest

namespace TestSimpleOptionalArgumentRequest {
static constexpr CommandId Id = 0x00000013;
} // namespace TestSimpleOptionalArgumentRequest

namespace TestEmitTestEventRequest {
static constexpr CommandId Id = 0x00000014;
} // namespace TestEmitTestEventRequest

namespace TestEmitTestFabricScopedEventRequest {
static constexpr CommandId Id = 0x00000015;
} // namespace TestEmitTestFabricScopedEventRequest

} // namespace Commands
} // namespace UnitTesting

namespace FaultInjection {
namespace Commands {

namespace FailAtFault {
static constexpr CommandId Id = 0x00000000;
} // namespace FailAtFault

namespace FailRandomlyAtFault {
static constexpr CommandId Id = 0x00000001;
} // namespace FailRandomlyAtFault

} // namespace Commands
} // namespace FaultInjection

} // namespace Clusters
} // namespace app
} // namespace chip
