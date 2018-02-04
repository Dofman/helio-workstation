/*
    This file is part of Helio Workstation.

    Helio is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Helio is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with Helio. If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

namespace Serialization
{
    namespace Core
    {
        static const String midiRoll = "MidiRoll";
        static const String editor = "Editor";
        static const String treeItem = "Node";
        static const String treeItemType = "Type";
        static const String treeItemName = "Name";
        static const String treeState = "TreeState";
        static const String selectedTreeItem = "SelectedNode";
        static const String treeItemId = "NodeId";

        static const String workspace = "Workspace";
        static const String root = "Root";
        static const String settings = "Settings";

        static const String instrumentRoot = "Instruments";
        static const String instrument = "Instrument";
        static const String instrumentId = "Uuid";
        static const String instrumentName = "Name";
        static const String instrumentNode = "Node";
        static const String instrumentConnection = "Connection";
        static const String audioPlugin = "PluginSettings";

        static const String plugin = "Plugin";
        static const String pluginState = "State";

        static const String project = "Project";
        static const String projectInfo = "ProjectInfo";
        static const String projectTimeStamp = "ProjectTimeStamp";
        static const String versionControl = "VersionControl";
        static const String patternSet = "PatternSet";
        static const String layerGroup = "Group";
        static const String layer = "Layer";
        static const String pianoLayer = "PianoLayer";
        static const String autoLayer = "AutoLayer";
        static const String projectTimeline = "ProjectTimeline";

        // Sequences
        static const String track = "Track";
        static const String automation = "Automation";
        static const String annotations = "Annotations";
        static const String timeSignatures = "TimeSignatures";
        static const String keySignatures = "KeySignatures";

        // Properties
        static const String trackId = "TrackId";
        static const String trackColour = "Colour";
        static const String trackChannel = "Channel";
        static const String trackInstrumentId = "InstrumentId";
        static const String trackControllerNumber = "Controller";
        static const String trackMuteState = "Mute";
        static const String trackSoloState = "Solo";

        // Events
        static const String note = "Note";
        static const String event = "Event";
        static const String annotation = "Annotation";
        static const String timeSignature = "TimeSignature";
        static const String keySignature = "KeySignature";

        // Patterns
        static const String clip = "Clip";
        static const String pattern = "Pattern";

        // Scales
        static const String scales = "Scales";
        static const String scale = "Scale";
        static const String scaleName = "Name";
        static const String scaleIntervals = "Intervals";
        static const String lastUsedScale = "LastUsedScale";

        static const String valueTag = "Key";
        static const String nameAttribute = "Name";
        static const String valueAttribute = "Value";
        static const String machineID = "MachineID";
        static const String lastWorkspace = "LastWorkspace";
        static const String globalConfig = "GlobalConfig";
        static const String openGLState = "OpenGL";
        static const String enabledState = "Enabled";
        static const String disabledState = "Disabled";

        static const String pluginManager = "PluginManager";
        static const String audioSettings = "AudioSettings";
        static const String audioCore = "AudioCore";
        static const String orchestra = "Orchestra";

        static const String recentFiles = "RecentFiles";
        static const String recentFileItem = "File";
        
        static const String clipboard = "HelioClipboard";

        static const String lastUsedLogin = "LastUsedLogin";
        static const String firstLaunchSetupDone = "FirstLaunchSetupDone";
    } // namespace Core

    namespace UI
    {
        static const String lastShownPageId = "LastShownPageId";
        static const String editorState = "EditorState";

        namespace Hotkeys
        {
            static const String schemes = "HotkeySchemes";
            static const String scheme = "HotkeyScheme";
            static const String schemeName = "Name";
            static const String keyPress = "KeyPress";
            static const String keyDown = "KeyDown";
            static const String keyUp = "KeyUp";
            static const String hotkeyDescription = "Key";
            static const String hotkeyReceiver = "Receiver";
            static const String hotkeyCommand = "Command";
        }

        namespace Colours
        {
            static const String schemes = "ColourSchemes";
            static const String appliedScheme = "AppliedScheme";
            static const String scheme = "Scheme";
            static const String colourMap = "ColourMap";
            static const String name = "Name";
            static const String id = "Id";

            static const String primaryGradientA = "PrimaryGradientA";
            static const String primaryGradientB = "PrimaryGradientB";
            static const String secondaryGradientA = "SecondaryGradientA";
            static const String secondaryGradientB = "SecondaryGradientB";

            static const String panelFill = "PanelFill";
            static const String panelBorder = "PanelBorder";

            static const String lassoFill = "LassoFill";
            static const String lassoBorder = "LassoBorder";

            static const String blackKey = "BlackKey";
            static const String whiteKey = "WhiteKey";

            static const String row = "Row";
            static const String beat = "Beat";
            static const String bar = "Bar";

            static const String text = "Text";

            static const String iconBase = "IconBase";
            static const String iconShadow = "IconShadow";
        } // namespace Colours
        
    } // namespace UI
    
    namespace Clipboard
    {
        static const String clipboard = "Clipboard";
        static const String layer = "Layer";
        static const String layerId = "LayerId";
        static const String pattern = "Pattern";
        static const String patternId = "PatternId";
        static const String firstBeat = "FirstBeat";
        static const String lastBeat = "LastBeat";
    } // namespace Clipboard

    namespace VCS
    {
        static const String vcsHistoryKey = "HistoryKey";
        static const String vcsHistoryId = "HistoryId";
        static const String vcsHistoryVersion = "HistoryVersion";
        
        static const String stashesRepository = "StashesRepository";
        static const String userStashes = "UserStashes";
        static const String quickStash = "QuickStash";
        static const String quickStashId = "QuickStashId";

        static const String pack = "Pack";
        static const String packItem = "Record";
        static const String packItemRevId = "ItemId";
        static const String packItemDeltaId = "DeltaId";

        static const String revision = "Revision";
        static const String head = "Head";
        static const String headIndex = "HeadIndex";
        static const String headIndexData = "HeadIndexData";
        static const String headRevisionId = "HeadRevisionId";
        static const String commitMessage = "Message";
        static const String commitTimeStamp = "Date";
        static const String commitVersion = "Version";
        static const String commitId = "Uuid";

        static const String vcsItemId = "VCSUuid";

        static const String revisionItem = "RevisionItem";
        static const String revisionItemType = "Type";
        static const String revisionItemName = "Name";
        static const String revisionItemDiffLogic = "DiffLogic";

        static const String delta = "Delta";
        static const String deltaId = "Uuid";
        static const String deltaName = "Name";
        static const String deltaIntParam = "IntParam";
        static const String deltaStringParam = "StringParam";
        static const String deltaType = "Type";

        static const String headStateDelta = "HeadState";
    } // namespace VCS

    namespace Api
    {
        // Session
        static const String sessionLastUpdateTime = "SessionLastUpdateTime";
        static const String sessionLastToken = "SessionLastToken";

        // JSON payload keys
        namespace V1
        {
            static const String user = "user";
            static const String session = "session";

            static const String name = "name";
            static const String email = "email";
            static const String login = "login";
            static const String password = "password";
            static const String passwordConfirmation = "password_confirmation";

            static const String bearer = "bearer";
            static const String deviceId = "device_id";
            static const String platformId = "platform_id";

            static const String token = "token";
            static const String errors = "errors";
        } // namespace V1
    } // namespace Api

    // TODO remove
    namespace Network
    {
        static const String clientCheck = "check";
        static const String deviceId = "helioClient";
        
        static const String action = "action";
        static const String version = "version";
        static const String platform = "platform";
        static const String major = "major";
        static const String minor = "minor";
        static const String revision = "revision";
        static const String bit = "bit";
        
        static const String updateStatus = "status";
        static const String latestVersion = "latestVersion";
        static const String updateUrl = "url";

        static const String email = "email";
        static const String passwordHash = "passwordHash";
        static const String fetch = "fetch";
        static const String push = "push";
        static const String remove = "delete";
        static const String file = "file";
        static const String data = "data";
        static const String key = "vcsIdHash";
        static const String realKey = "vcsId";
        static const String title = "title";
    }  // namespace Network
    
    namespace Locales
    {
        static const String metaSymbol = "{x}";

        static const String wrapperClassName = "PluralForm";
        static const String wrapperMethodName = "Detect";
        static const String currentLocale = "CurrentLocale";
        
        static const String translations = "Translations";
        static const String locale = "Locale";
        static const String literal = "Literal";
        static const String author = "Author";
        static const String name = "Name";
        static const String id = "Id";
        
        static const String pluralForms = "PluralForms";
        static const String equation = "Equation";
        
        static const String pluralLiteral = "PluralLiteral";
        static const String pluralForm = "PluralForm";
        static const String translation = "Translation";
    }  // namespace Locales
    
    namespace Arps
    {
        static const String arpeggiator = "Arpeggiator";
        static const String arpeggiators = "Arpeggiators";
        
        static const String sequence = "Sequence";
        static const String isReversed = "IsReversed";
        static const String relativeMapping = "RelativeMapping";
        static const String limitsToChord = "LimitsToChord";
        static const String scale = "Scale";

        static const String id = "Id";
        static const String name = "Name";
    }  // namespace Arps
    
    namespace Undo
    {
        static const String undoStack = "UndoStack";
        static const String transaction = "Transaction";

        static const String name = "Name";
        static const String xPath = "Path";
        static const String trackId = "TrackId";
        static const String group = "Group";

        static const String xPathBefore = "PathBefore";
        static const String xPathAfter = "PathAfter";
        static const String colourBefore = "ColourBefore";
        static const String colourAfter = "ColourAfter";
        static const String instrumentIdBefore = "InstrumentIdBefore";
        static const String instrumentIdAfter = "InstrumentIdAfter";
        static const String muteStateBefore = "MuteStateBefore";
        static const String muteStateAfter = "MuteStateAfter";
        
        static const String annotationBefore = "AnnotationBefore";
        static const String annotationAfter = "AnnotationAfter";
        static const String timeSignatureBefore = "TimeSignatureBefore";
        static const String timeSignatureAfter = "TimeSignatureAfter";
        static const String keySignatureBefore = "KeySignatureBefore";
        static const String keySignatureAfter = "KeySignatureAfter";
        static const String eventBefore = "EventBefore";
        static const String eventAfter = "EventAfter";
        static const String noteBefore = "NoteBefore";
        static const String noteAfter = "NoteAfter";
        static const String groupBefore = "GroupBefore";
        static const String groupAfter = "GroupAfter";
        static const String instanceBefore = "InstanceBefore";
        static const String instanceAfter = "InstanceAfter";

        static const String pianoTrackInsertAction = "PianoTrackInsertAction";
        static const String pianoTrackRemoveAction = "PianoTrackRemoveAction";
        
        static const String automationTrackInsertAction = "AutomationTrackInsertAction";
        static const String automationTrackRemoveAction = "AutomationTrackRemoveAction";
        
        static const String midiTrackRenameAction = "MidiTrackRenameAction";
        
        static const String midiTrackChangeColourAction = "MidiTrackChangeColourAction";
        static const String midiTrackChangeInstrumentAction = "MidiTrackChangeInstrumentAction";
        static const String midiTrackMuteAction = "MidiTrackMuteAction";
        
        static const String patternClipInsertAction = "PatternClipInsertAction";
        static const String patternClipRemoveAction = "PatternClipRemoveAction";
        static const String patternClipChangeAction = "PatternClipChangeAction";

        static const String noteInsertAction = "NoteInsertAction";
        static const String noteRemoveAction = "NoteRemoveAction";
        static const String noteChangeAction = "NoteChangeAction";
        static const String notesGroupInsertAction = "NotesGroupInsertAction";
        static const String notesGroupRemoveAction = "NotesGroupRemoveAction";
        static const String notesGroupChangeAction = "NotesGroupChangeAction";
        
        static const String annotationEventInsertAction = "AnnotationEventInsertAction";
        static const String annotationEventRemoveAction = "AnnotationEventRemoveAction";
        static const String annotationEventChangeAction = "AnnotationEventChangeAction";
        static const String annotationEventsGroupInsertAction = "AnnotationEventsGroupInsertAction";
        static const String annotationEventsGroupRemoveAction = "AnnotationEventsGroupRemoveAction";
        static const String annotationEventsGroupChangeAction = "AnnotationEventsGroupChangeAction";

        static const String timeSignatureEventInsertAction = "TimeSignatureEventInsertAction";
        static const String timeSignatureEventRemoveAction = "TimeSignatureEventRemoveAction";
        static const String timeSignatureEventChangeAction = "TimeSignatureEventChangeAction";
        static const String timeSignatureEventsGroupInsertAction = "TimeSignatureEventsGroupInsertAction";
        static const String timeSignatureEventsGroupRemoveAction = "TimeSignatureEventsGroupRemoveAction";
        static const String timeSignatureEventsGroupChangeAction = "TimeSignatureEventsGroupChangeAction";

        static const String keySignatureEventInsertAction = "KeySignatureEventInsertAction";
        static const String keySignatureEventRemoveAction = "KeySignatureEventRemoveAction";
        static const String keySignatureEventChangeAction = "KeySignatureEventChangeAction";
        static const String keySignatureEventsGroupInsertAction = "KeySignatureEventsGroupInsertAction";
        static const String keySignatureEventsGroupRemoveAction = "KeySignatureEventsGroupRemoveAction";
        static const String keySignatureEventsGroupChangeAction = "KeySignatureEventsGroupChangeAction";

        static const String automationEventInsertAction = "AutomationEventInsertAction";
        static const String automationEventRemoveAction = "AutomationEventRemoveAction";
        static const String automationEventChangeAction = "AutomationEventChangeAction";
        static const String automationEventsGroupInsertAction = "AutomationEventsGroupInsertAction";
        static const String automationEventsGroupRemoveAction = "AutomationEventsGroupRemoveAction";
        static const String automationEventsGroupChangeAction = "AutomationEventsGroupChangeAction";
    } // namespace Undo
}  // namespace Serialization
