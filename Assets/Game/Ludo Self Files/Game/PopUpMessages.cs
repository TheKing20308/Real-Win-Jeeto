public static class PopUpMessages
{
    // Error Messages
    public const string ErrorGeneric = "An error occurred. Please try again.";
    public const string ErrorServerConnection = "Can't connect to the server. Please check your internet connection.";
    public const string ErrorDataLoad = "Failed to load data. Please try again later.";
    public const string ErrorUnauthorizedAccess = "Unauthorized access detected.";

    // Confirmation Messages (for Yes/No buttons)
    public const string ConfirmDelete = "Are you sure you want to delete this item?";
    public const string ConfirmExit = "Are you sure you want to exit?";
    public const string ConfirmSaveChanges = "Do you want to save the changes?";
    public const string ConfirmLogout = "Are you sure you want to log out?";

    // Success Messages
    public const string SuccessDataSaved = "Data successfully saved.";
    public const string SuccessOperationCompleted = "Operation completed successfully.";
    public const string SuccessRegistrationComplete = "Registration completed successfully.";
    public const string SuccessUpdateComplete = "Update completed successfully.";

    // Warning Messages
    public const string WarningUnsavedChanges = "Warning: You have unsaved changes.";
    public const string WarningActionIrreversible = "Warning: This action is irreversible.";
    public const string WarningLongOperation = "This operation might take a while. Proceed?";
    public const string WarningLeavingPage = "Warning: You are about to leave this page.";

    // Informational Messages
    public const string InfoProcessingRequest = "Processing your request. Please wait...";
    public const string InfoCheckEmail = "Check your email for further instructions.";
    public const string InfoFeatureComingSoon = "This feature is coming soon.";
    public const string InfoUpdateAvailable = "New updates are available.";

    // Authentication Messages
    public const string AuthInvalidCredentials = "Invalid credentials. Please try again.";
    public const string AuthSessionExpired = "Your session has expired. Please log in again.";
    public const string AuthAccountCreated = "Account successfully created.";
    public const string AuthPermissionDenied = "You do not have permission for this action.";

    // Network and Connectivity
    public const string NetworkNoConnection = "No internet connection available.";
    public const string NetworkReconnect = "Attempting to reconnect. Please wait...";
    public const string NetworkTimeout = "Network timeout. Please try again later.";
    public const string NetworkMaintenance = "Server maintenance in progress. Please try later.";
    
    //custom multiplayer
    public const string joinTournament = "Would you like to join this tournament";
    public const string leaveTournament = "Are you sure you want to leave this tournament, no refund will be provided!";
    public const string leaveGame = "Are you sure you want to leave this game, no refund will be provided!";
    public const string welcome = "Registration Success, Welcome to Boomlly!";
    public const string emptyField = "Please fill up required fields";
}
